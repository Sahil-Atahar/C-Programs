#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	switch(n%2==0)
	{
		case 1:
		printf("%d is Even number.",n);
		break;
		case 0:
		printf("%d is Odd number.",n);
		break;
	}
	return 0;
}