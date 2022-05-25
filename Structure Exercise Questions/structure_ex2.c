#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book
{
	char name[30];
	float price;
	int pages;
};

int main()
{
	clrscr();
	struct book b1;
    strcpy(b1.name, "C Programming");
	b1.price = 109.8;
	b1.pages  = 20;	
	
	printf("Book Details: \n");
	printf("Book name: ");
	puts(b1.name);
	printf("Price : %f\nPages: %d",b1.price,b1.pages);
	
	printf("%u     %u       %u",&b1.name,&b1.price,&b1.pages);
	getch();
	return 0;
}
