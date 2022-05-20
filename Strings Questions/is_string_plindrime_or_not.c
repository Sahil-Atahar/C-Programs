#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char str[15];
	printf("Enter the string: ");
	gets(str);
	for(int i = 0; i < strlen(str)/2; i++) {
		str[i] == str[strlen(str)+i];
		}
	return 0;
}