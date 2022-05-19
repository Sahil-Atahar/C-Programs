//Program to whether a number is Armstrong or Not.
#include <stdio.h>
#include <conio.h>
int ret(int n);
int main(){

	clrscr();
	int n,r,sum=0,n1;
	printf("Enter the number: ");
	scanf("%d",&n);
	n1=n;
	while(n1!=0){
		if(n1>9){
		r=n1%10;	}
		else
		{
			r=n1;
		}
		sum=sum+(r*r*r);
		n1=n1/10;
		}
	if(n==sum){
		printf("%d is an armstrong number",n);
		}
	else
	{
		printf("%d is not an armstrong number",n);
	}
	getch();	
	return 0;
	}
