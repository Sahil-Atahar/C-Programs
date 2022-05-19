#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	char c;
	int n;
	printf("Enter the character : ");
	scanf("%c",&c);
	n=(int)c;
	if(n>96 && n<123){
	printf("%c is LowerCase Character",c);	}
	else if(n>64 && n<91){
	printf("%c is UpperCase Character",c);	}
	else
	{
		printf("%c is not a alphabet",c);
	}
	getch();
	return 0;
}
