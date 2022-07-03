#include <stdio.h>
#include <conio.h>

#define true 1
#define false 0

void dislpayGameLayout(char *box) {
	printf("Player 1: X \nPlayer 2: 0\n\n");
	printf("%c\t%c\t%c\n",box[0],box[1],box[2]);
	printf("%c\t%c\t%c\n",box[3],box[4],box[5]);
	printf("%c\t%c\t%c\n\n",box[6],box[7],box[8]);
}
void updateBox(char *box,char userInput,char symbol) {
	char isCorrectInput = 'n';
	
	for(int i = 0 ; i < 9 ; i++){
		if(box[i] == userInput) {
		isCorrectInput = 'y';
		break;
		}
	}
	if(isCorrectInput == 'y') {
	for(int i = 0 ; i < 9 ; i++) 
	{
		if(userInput == box[i]) {
			if(box[i] == 'X' || box[i] == '0') {
			printf("Choose left places: ");
			scanf("%c",&userInput);
			updateBox(box,userInput,symbol);
			}
			else
			box[i] = symbol;
			}
		} 
	}
	else {
		printf("Wrong input.");
		printf("Choose left places: ");
		scanf("%c",&userInput);
		updateBox(box,userInput,symbol);
		}
	clrscr();
	dislpayGameLayout(box);
}
int isPlayerWon(char *box) {
	for(int i = 0; i< 7; i = i+3) {
	if(box[i] == box[i+1] && 
	   box[i+1] == box[i+2]) {
	printf("Line [%d, %d, %d] complete.",i+1,i+2,i+3);
	return false;
	}
	}
	for(int i = 0; i< 3; i++) {
	if(box[i] == box[i+3] && 
	   box[i+3] == box[i+6]) {
	printf("Line [%d, %d, %d] complete.",i+1,i+4,i+7);
	return false;
	}
	}
	if(box[0] == box[4] && box[4] == box[8]) {
	printf("Line [%d, %d, %d] complete.",1,5,9);
	return false;
	 }
	else if(box[2] == box[4] && box[4] == box[6]) {
	printf("Line [%d, %d, %d] complete.",3,5,7);
	return false;
	}
	return true;
}

int isGameDraw(char *box) {
	int checkCounter = 0;
	for(int i = 0 ; i < 9 ; i++) 
	{
		if(box[i] == 'X' || box[i] == '0')
		checkCounter++;
	}
	if(checkCounter == 9)
	return false;
	else 
	return true;
}
void askToPlayAgain();

int main()
{
	char box[] = {'1','2','3','4','5','6','7','8','9'},userInput;
	
	while(1)
	{	clrscr();
		
		dislpayGameLayout(box);
		printf("Player 1: ");
		scanf("%c",&userInput);
		updateBox(box,userInput,'X');
		if(isPlayerWon(box) == false) {
		printf("Player 1 Won this game.");
		askToPlayAgain();
		break;
		} else if(isGameDraw(box) == false) {
		printf("Game draw.");
		askToPlayAgain();
		break;
		}

		clrscr();
		
		dislpayGameLayout(box);
		printf("Player 2: ");
		scanf("%c",&userInput);
		updateBox(box,userInput,'0');
		if(isPlayerWon(box) == false) {
		printf("Player 2 Won this game.");
		askToPlayAgain();
		break;
		} else if(isGameDraw(box) == false) {
		printf("Game draw.");
		askToPlayAgain();
		break;
		}
	}
	getch();
	return 0;
}

void askToPlayAgain() {
	char input;
	printf("\nDo you want to play again[Y/N]? ");
	scanf("%c",&input);
	if(input == 'y' || input == 'Y') {
	main();
	}
	printf("Thanks to play this game.");
}
