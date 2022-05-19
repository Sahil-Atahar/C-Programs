#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	int n1,n2,gcd,i;
	printf("Enter two number: ");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1 && i<=n2;i++){
		if(n1%i==0 && n2%i==0){
			gcd = i;	}
			}
		printf("\nGCD of %d & %d is : %d.\n",n1,n2,gcd);
	getch();
	return 0;
}
