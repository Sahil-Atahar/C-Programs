#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	char c;
	printf("Enter the character : ");
	scanf("%c",&c);
	if(c=='a'||c=='e' || c=='i' || c=='o' || c=='u' || c=='A'||c=='E' || c=='I' || c=='O' || c=='U'){
	printf("%c is a vowel character: ",c);
		}
	else
	{
		printf("%c is not a vowel character: ",c);
	}
	getch();
	return 0;
}

/*
//Using ASCII value of the character 
int main()
{  clrscr();
	int n;
	char c;
	printf("Enter the character : ");
	scanf("%c",&c);
	n=(int)c;
	if(n==97 || n==65 || n==101 || n==69 || n==105 || n==73 || n==111 || n==79 || n==117 || n==85){
	printf("%c is a vowel character: ",c);		}
	else
	{
		printf("%c is not a vowel character: ",c);
	}
	getch();
	return 0;
}
*/
