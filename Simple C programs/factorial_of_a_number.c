// Program to print Factorial of a given number Using recursion.
#include <stdio.h>

long factorialFunc(int n);

int main()
{
	int n;
	long factorial;
	printf("Enter the number: ");
	scanf("%d",&n);
	factorial = factorialFunc(n);
	printf("Factorial of %d  is %ld.",n,factorial);
	return 0;
}

long factorialFunc(int n)
{	long factorial = n;
	if(n==1 || n== 0){
	return 1;  }
	factorial = factorial* factorialFunc(n-1);
	return factorial;
}
