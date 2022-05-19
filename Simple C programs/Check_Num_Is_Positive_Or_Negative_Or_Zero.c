#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	switch(n<0)
	{
		case 1: 
		printf("Number is negative.");
		break;
		case 0:
		switch(n>0)
		{
		case 1:
		printf("Number is positive.");
		break;
		case 0:
		printf("Number is Zero.");
		break;
		}
	}
	return 0;
}