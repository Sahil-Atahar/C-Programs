#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int randNo,userInputNo,attempts = 0;
	char askforInput;
	
	randNo = rand() % 100 + 1;
	clrscr();
	printf("In this game, You have to guess the number between 1 to 100.Lets play.\n");
	printf("Guess the number between 1 to 100: ");
		
	while(1)
	{	
		scanf("%d",&userInputNo);
		attempts++;
		
		if(userInputNo > randNo) 
		printf("Guess some less number: ");
		else if(userInputNo < randNo) 
		printf("Guess some greater number: ");
		else
		{
			printf("Correct guess.You guess the number in %d attempts.\n",attempts);
			printf("Do you want to play again?");
			scanf("%c",&askforInput);
			if(askforInput == 'y' || askforInput == 'Y')
			main();
			else {
			break;
			}
		}
	}
	printf("Thanks to play this mini game.");
	getch();
	return 0;
}
