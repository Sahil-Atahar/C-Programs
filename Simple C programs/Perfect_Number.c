//Program to check wheater a number is perfect or not
/*
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number. 
*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int n ,diviSum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1; i <n; i++) {
		if(n%i==0){
			diviSum+=i;
			}
		}
	if(n==diviSum){
		printf("%d is a perfect number",n);
		}
	else{
		printf("%d is not a perfect number",n);
		}
	getch();
	return 0;
}
