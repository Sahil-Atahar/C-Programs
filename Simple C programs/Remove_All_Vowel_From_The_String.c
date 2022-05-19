//Program to Remove Vowels form the given String
#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	char Str[20],c;
	int i	,j;
	printf("Enter the String: ");
	gets(Str);
	printf("Before removing Vowel: \nString is : ");
	puts(Str);
	for(i=0;i<20;i++){
		if(Str[i]=='A' || Str[i]=='a' || Str[i]=='E' || Str[i]=='e' || Str[i]=='I' || Str[i]=='i' || Str[i]=='O' || Str[i]=='o' || Str[i]=='U' || Str[i]=='u' ){
		for(j=i;j<20;j++){
		Str[j]=Str[j+1];
			}
										}
		}
	printf("After removing Vowel: \nString is : ");
	puts(Str); 
	getch();
	return 0;
}
