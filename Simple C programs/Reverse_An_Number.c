#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	int n,r,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Before Reversing number is : %d\n",n);
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("After Reversing number is : %d\n",sum);
	getch();
	return 0;
}
