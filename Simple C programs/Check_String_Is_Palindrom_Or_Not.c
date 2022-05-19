#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{	
	clrscr();
	char str[15],copy1[7],copy2[7];
	int True;
	printf("Enter the String: ");
	gets(str);
	
	for(int k=0;k<=strlen(str)/2;k++){
		copy2[k]=str[k];
		}
	for(int j=strlen(str)/2+1;j<strlen(str);j++){
		copy1[j-(strlen(str)/2+1)]=str[j];
		}
		if(strcmp(copy1,copy2)==0){
		printf("String is Palindrom");
			}
		else
		{
			printf("String is not Palindrom");
		}			
	getch();
	return 0;
}
