#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void startGame();
void displayGame(int,int);
int isPlayerWon(int,int);
void askForPlayAgain();

int main()
{
	clrscr();
	//Displaying welcome message and method to play
	printf("Welcome to Snake Game:-\nRemember this:\n\t\t\tYou just have to press any key once at your turn.\nPress any key to start game: \n\n");
	//Waiting for user input(any input)
	getch();
	//Calling the start game function to start game
	startGame();
	getch();
	return 0;
}

void startGame() {
	int randomno;
	int firstplayerposition = 0;
	int secondplayerposition = 0;
	//Caling the method to display game 
	displayGame(firstplayerposition, secondplayerposition);
	
	//While loop will continue untill any player doesn't won
	while(1) {
		printf("\nPlayer 1 turn:  ");
		getch();
		//Generating random number
		randomno = (rand() % ( 6-1+1))+1;
		firstplayerposition += randomno;
		clrscr();
		printf("\nPlayer 1 turn:  ");
		printf("%d\n\n",randomno);
		//Caling the method to display game  and showing their position
		displayGame(firstplayerposition, secondplayerposition);
		
		//Checking that is player 1 won
		if(isPlayerWon(firstplayerposition,secondplayerposition) == 0 ) {
	  //Asking for to play again
		askForPlayAgain();
		break;
		}
		printf("\nPlayer 2 turn:  ");
		getch();
		//Generating random number
		randomno =( rand() % ( 6-1+1))+1;
		secondplayerposition += randomno;
		clrscr();
		printf("\nPlayer 2 turn: ");
		printf("%d\n\n",randomno);
		//Caling the method to display game  and showing their position
		displayGame(firstplayerposition,secondplayerposition);
		
		//Checking that is player 2 won
		if(isPlayerWon(firstplayerposition,secondplayerposition) == 0 ) {
		//Asking for to play again
		askForPlayAgain();
		break;
		}
			}
	}
	
void displayGame(int firstplayerposition, int secondplayerposition ) {
	for(int i = 10 ; i >=1;  i--) {	
		if(i % 2 == 0){
		for(int j = i*10 ;  j > i*10 - 10; j--) {
			/*Check condition what happen when player1 and player 2 comes at the same position.*/
		if(j != 100) {
			if(firstplayerposition == secondplayerposition &&( j == firstplayerposition || j == secondplayerposition)) {	
					printf("$$\t",j);
			}
			//Replacing the number digit with player name
		else if(firstplayerposition == j)
		printf("$1\t",j);
	    else if(secondplayerposition == j)
		printf("$2\t",j);
			else
			printf("%d\t",j);
			}
			else
		printf("H0\t",j);
			}
			printf("\n");
			}
		else if (i % 2 !=0){
		for(int j = (i-1)*10 + 1;  j <= i*10 ; j++) {
			/*Check condition what happen when player1 and player 2 comes at the same position.*/
				if(firstplayerposition == secondplayerposition &&( j == firstplayerposition || j == secondplayerposition)) {	
					printf("$$\t",j);
			}
			//Replacing the number digit with player name
	        else if(firstplayerposition == j)
		printf("$1\t",j);
			else if(secondplayerposition == j)
		printf("$2\t",j);
			else
			printf("%2.2d\t",j);
			}
			printf("\n");
			}
	}
}
/*Function to check wheather any player is won or not it returns 0 if any Player will win the game otherwise ot returns 1*/
int isPlayerWon(int firstplayerposition,int secondplayerposition) {
	
	if(firstplayerposition >= 100)
		{
			printf("Player 1 won this game");
			return 0;
		}
	else if(secondplayerposition >= 100)
	   {
		 	printf("Player 2 won this  game");
		 	return 0;
		}
		return 1;
}
//As the name suggest ,Function to ask for play again
void askForPlayAgain()
{
	char input;
	printf("Enter [A/a] for again: ");
	scanf("%c",&input); 
	if(input == 'a' || input == 'C'){
	clrscr();
	startGame();
		}
	}
