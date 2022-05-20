/*
To compare  two string in C we will use strcmp() function which is declared in string.h. this function return 0 if string are equals .
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str1[] = "Hello";
	char str2[] = "world";
	
	if(strcmp(str1,str2) == 0) 
	printf("Strings are same");
	
	else
	printf("Strings are not same");
	
	getch();
	return 0;
}
