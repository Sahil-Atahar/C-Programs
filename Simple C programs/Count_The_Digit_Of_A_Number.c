#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	int n,n1,count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		n1=n1/10;
		count++;
	}
	printf("%d number have %d digits.",n,count);
	getch();
	return 0;
}
