#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	int n1,n2;
	float avg;
	printf("Enter two number: ");
	scanf("%d%d",&n1,&n2);
	avg=(float)(n1+n2)/2;
	printf("Average of %d & %d is : %.2f\n",n1,n2,avg);
	getch();
	return 0;
	}
