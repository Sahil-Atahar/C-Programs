#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	long Amount;
	int Count,i=0;
	int Currency[9]={2000,500,100,50,20,10,5,2,1};
	printf("Enter the Amount: ");
	scanf("%ld",&Amount);
	printf("\nDinomination of %ld is :\n\n",Amount);
	while(Amount!=0){
			Count=Amount/Currency[i];
			Amount=Amount%Currency[i];
			if(Count!=0)
			printf("%4d x %2d = %ld\n",Currency[i],Count,Currency[i]*Count);
			i++;
			}
	getch();
	return 0;
}
