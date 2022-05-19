#include <stdio.h>
#include <conio.h>
int DigitSum(int n);
int main()
{	clrscr();
	int n,n1,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;
    while(n1>10){
    	n1=DigitSum(n1);
    	}
    printf("Generic Root of %d is %d.\n",n,n1);
    getch();
    return 0;
}
int DigitSum(int n){
	int sum=0,r;
	while(n!=0)
	{	if(n>9){
		r=n%10;	}
		else
		{
			r=n;
		}
		sum=sum+r;
		n=n/10;
	}
	return sum;
}
