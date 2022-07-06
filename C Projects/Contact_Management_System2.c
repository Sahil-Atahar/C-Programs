#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void AddCont();
void ShowCont();
void EditCont(char *SearchName,int OldNumber);
void SearchCont(int n);
void DeleteCont(char *SearchNam,int n);
struct Contact{
	char Name[5];
	long long int No;
	};
char SearchName[15];

int main()
{	clrscr();
	int input;
	printf("\n\t\t\t==========Main Menu==========\n");
	printf("\n\t\t\t[1] Add Contact. \n\t\t\t[2] Show Contact. \n\t\t\t[3] Search Contact. \n\t\t\t[4] Edit Contact.\n\t\t\t[5] Delete Contact. \n\n\t\t\tYour Choice: ");
	scanf("%d",&input);
	switch(input)
	{
		case 1:
			AddCont();
			break;
		case 2:
			ShowCont();
			break;
		case 3:
			SearchCont(input);
			break;
		case 4:
			SearchCont(input);
			break;
		case 5:
			SearchCont(input);
			break;
	}
	return 0;
}
void AddCont(char *Name,long long int Number,int n){
	clrscr();
	if(n == 4)
	printf("\n\t\t\t==========Add Contact==========\n");
	FILE *txt;
	struct Contact C;
	txt=fopen("C.txt","ab");
	if(txt==NULL)
	{
		printf("File Can't Open.");
		
		exit(0);	
	}
	else
	{	if(n == 4) {
		strcpy(C.Name,Name);
		C.No = Number;
		}
		else {
		printf("\n\t\t\tEnter the Name: ");
		scanf("%s",C.Name);
		printf("\t\t\tEnter the Phone Number: ");
		scanf("%lld",&C.No);
		printf("\n\t\t\tContact added successfully");
		}
		fwrite(&C,sizeof(C),1,txt);
		fclose(txt);
	}
}
void ShowCont(){
	clrscr();
	struct Contact C;
	printf("\n\t\t\t==========Show Contact==========\n");
	FILE *txt;
	txt=fopen("C.txt","rb");
	if(txt==NULL)
	{
		printf("File Can't Open.");
		exit(0);	
	}
	else
	{	printf("\n\t\t       Name             Number\n\n");
		while(fread(&C,sizeof(C),1,txt)>0)
		{
		printf("\n\t\t%10s \t\t\t%15lld\n",C.Name,C.No);
			strcpy(C.Name,"");
		}	
	}
	fclose(txt);
}
void EditCont(char *SearchName,int OldNumber){
	FILE *txt;
	txt=fopen("C.txt","rb");
	struct Contact C;
	int input;
	long long int NewNumber;
	char NewName[10];
	printf("\n\t\t\tWhat you want to Edit: \n\n\t\t\t[1] Name. \n\t\t\t[2] Phone number. \n\n\t\t\t    Your choice: ");
	scanf("%d",&input);
	if(input==1){
	printf("\n\t\t\tEnter the New Name: ");
	scanf("%s",NewName);
	DeleteCont(SearchName,4);
	AddCont(NewName,OldNumber,4);					}
	else if(input==2){
	printf("\n\t\t\tEnter the New Number: ");
	scanf("%lld",&NewNumber);
	DeleteCont(SearchName,4);
	AddCont(SearchName,NewNumber,4);
			}
}
void SearchCont(int n)
{
	clrscr();
	struct Contact C;
	int found = 0;
	FILE *txt,*ptr;
	txt=fopen("C.txt","rb");
	if(n==3){
	printf("\n\t\t\t==========Search Contact==========\n");
	}
	if(n==4){
	printf("\n\t\t\t==========Edit Contact==========\n");
	}
	if(n==5){
	printf("\n\t\t\t==========Delete Contact==========\n");
	}
	printf("\n\t\t\tEnter of the name of the record: ");
	scanf("%s",SearchName);
	while(fread(&C,sizeof(C),1,txt)>0)
	{
		if(strcmp(C.Name,SearchName)==0)
		{	found=1;
			printf("\n\t\t\t\t\tContact find \n");
			printf("\n\t\t      Name             Number\n");
			printf("\n\t\t%10s \t\t\t%15lld\n",C.Name,C.No);
			break;
		}
	}
	if(!found){
		printf("\n\t\t\t\t\tNo Contact find");
			}
	if(n==5 && found==1){
		DeleteCont(SearchName,n);
		}
	if(n==4 && found==1){
		EditCont(SearchName,C.No);
		}
}
void DeleteCont(char *SearchName,int n)
{	
	char input;
	char *pointer;
	char OldName[10]="Temp.txt";
	char NewName[10]="C.txt";
	struct Contact C;
	if(n == 4) {
	input = 'y';
		}
	else {
	printf("\n\t\t\tAre you sure to delete this contact[Y/N]: " );
	scanf("%c",&input);
	}
	if(input=='y' || input=='Y')
	{	printf("\n\t\t\tContact Deleted Successfully\n");
		FILE *txt,*ptr;
		txt=fopen(NewName,"rb");
		ptr=fopen(OldName,"wb");
		while(fread(&C,sizeof(C),1,txt)>0)
		{
		if(strcmp(C.Name,SearchName)!=0)
			{
			fwrite(&C,sizeof(C),1,ptr);	
			}
		}
		fclose(txt);
		fclose(ptr);
		remove(NewName);
		rename(OldName,NewName);
	}
}
