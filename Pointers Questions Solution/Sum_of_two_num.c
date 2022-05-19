#include <stdio.h>
#include <conio.h>
int main()
{
	int n1, n2, *pn1, *pn2,sum;
	
	printf("Enter the First number: ");
	scanf("%d",&n1);
	printf("Enter the Second number: ");
	scanf("%d",&n2);
	
	pn1 = &n1;
	pn2 = &n2;
	
	sum = *pn1 + *pn2;
	printf("Sum of the numbers is : %d",sum);
	
	getch();
	return 0;
}
