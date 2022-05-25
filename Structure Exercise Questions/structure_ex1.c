#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	clrscr();
	struct book{
	char name[30];
	float price;
	int pages;
		};
		
	struct book b1,b2,b3;
	printf("Enter the name, price & pages of b1 book: ");
		gets(b1.name);
   scanf("%f %d",&b1.price,&b1.pages);
		
		printf("Enter the name, price & pages of b2 book: ");
		gets(b2.name);
   scanf("%f %d",&b2.price,&b2.pages);
		
		printf("Enter the name, price & pages of b3 book: ");
		gets(b3.name);
   scanf("%f %d",&b3.price,&b3.pages);
		
		printf("b1 book details: \nName = ");
		puts(b1.name);
		printf("\nPrice = %f \nPages =  %d \n\n",b1.name,b1.price,b1.pages);
		
		printf("b1 book details: \nName = ");
		puts(b1.name);
		printf("\nPrice = %f \nPages =  %d \n\n",b1.name,b1.price,b1.pages);
		
		printf("b1 book details: \nName = ");
		puts(b1.name);
		printf("\nPrice = %f \nPages =  %d \n\n",b1.name,b1.price,b1.pages);
		
		getch();
		return 0;
}
