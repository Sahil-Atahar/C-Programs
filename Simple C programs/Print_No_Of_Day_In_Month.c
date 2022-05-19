#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int main()
{ 	clrscr();
	char MN[10];
	Ask:
	fflush(stdin);
	printf("Enter the Month name: ");
	gets(MN);
	for(int i=0;i<10;i++){
		MN[i]=toupper(MN[i]);
		}
	if(strcmp(MN,"JANUARY")==0){
		printf("January Month have 31 days.");	}
	else if(strcmp(MN,"FEBRUARY")==0){
		char c;
		AskAgain:
		fflush(stdin);
		printf("Is Year Leap Year(Y/N): ");
		scanf("%c",&c);
		if(c=='y' || c=='Y')
		printf("February  Month have 29 days.");	
		if(c=='n' || c=='N')
		printf("February Month have 28 days.");	
		else
		{
			printf("Wrong Entered");
			goto AskAgain;
		}
		}
	else if(strcmp(MN,"MARCH")==0){
		printf("March Month have 31 days.");	}
	else if(strcmp(MN,"APRIL")==0){
		printf("April Month have 30 days.");	}
	else if(strcmp(MN,"MAY")==0){
		printf("May Month have 31 days.");	}
	else if(strcmp(MN,"JUNE")==0){
		printf("June Month have 30 days.");	}
	else if(strcmp(MN,"JULY")==0){
		printf("July Month have 31 days.");	}
	else if(strcmp(MN,"AUGUST")==0){
		printf("August Month have 31 days.");	}
	else if(strcmp(MN,"SEPTEMBER")==0){
		printf("September Month have 30 days.");	}
	else if(strcmp(MN,"OCTOBER")==0){
		printf("October Month have 31 days.");	}
	else if(strcmp(MN,"NOVEMBER")==0){
		printf("November Month have 30 days.");	}
	else if(strcmp(MN,"DECEMBER")==0){
		printf("December Month have 31 days.");	}
	else{
		printf("Month Name is Wrong\n");
		goto Ask;
	}
	getch();
	return 0;
}
