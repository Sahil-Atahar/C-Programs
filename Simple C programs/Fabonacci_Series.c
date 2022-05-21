//Program to print fabonacci series
/*
The Fibonacci sequence, in which each number is the sum of the two preceding ones. The sequence commonly starts from 0 and 1,
*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int n,a = 0,b = 1,next;
	printf("Enter the no of term to print series: ");
	scanf("%d",&n);
	for(int i = 1;i <= n; i++) {
		printf("%d\t",a);
		next = a+b;
		a = b ;
		b = next;
		}
	getch();
	return 0;
}
