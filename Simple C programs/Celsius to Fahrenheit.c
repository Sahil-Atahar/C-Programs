#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	float C,F;
	printf("Enter the tempreture in Celsius: ");
	scanf("%f",&C);
	F=(9*C/5)+32;
	printf("\n%.2f Celsius = %.2f Fahrenheit.\n",C,F);
	getch();
	return 0;
}
