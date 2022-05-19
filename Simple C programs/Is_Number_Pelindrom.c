#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int n,r,sum=0,n1;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		r=n1%10;
		sum=sum*10+r;
		n1=n1/10;
	}
	if(n==sum){
		printf("%d is a Palindrom number.",n);
		}
	else
	{
		printf("%d is not Palindrom number.",n);
	}
	getch();
	return 0;
}
