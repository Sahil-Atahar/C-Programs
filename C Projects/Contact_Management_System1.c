#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

struct person
{
	char name[20];
	long long int number;
}p1;

char name[20];
long long int number;

void addContact(char *,long long int,char);
void showContacts();
char* searchContact(char);
void updateContact(char);
void deleteContact(char);

int main()
{
	int userInput;
	clrscr();
	printf("==========Contact Management System==========\n");
	printf("[1] Add Contact.\n[2] Show Contact.\n[3] Search Contact. \n[4] Update Contact.\n[5] Delete Contact. \n\nYour Choice: ");
	
	takeInputAgain:
	
	scanf("%d",&userInput);
	if(userInput >= 1 && userInput <=5 ) {
		switch(userInput)
		{
			case 1: 
			addContact(NULL,0,'a');
			break;	
			case 2:
			showContacts();
			break;
			case 3:
			searchContact('s');
			break;
			case 4:
			updateContact('u');
			break;
			case 5:
			deleteContact('d');
			}
		}
	else
	{
		printf("Wrong input.Choose correct option: ");
		goto takeInputAgain;
	}
	getch();
	return 0;
}

void addContact(char *name,long long int number,char action) {
	FILE *fp;
	fp = fopen("Contacts.txt","ab");
	if(fp == NULL) {
	printf("File can't open!");
	return;
		}

	if(action == 'a') {
	clrscr();
	printf("==========Add Contact==========\n\n");
	printf("Enter the name: ");
	getchar();
	gets(p1.name);
	printf("Enter the number: ");
	scanf("%lld",&p1.number);
		}
	else
	{
		strcpy(p1.name,name);
		p1.number = number;
	}
	fwrite(&p1,sizeof(p1),1,fp);
	if(action == 'a') 
	printf("Contact added succesfully.");
	fclose(fp);
	if(action == 'u') {
		return;}
	getch();
	main();
}
void showContacts() {
	int noOfContacts = 0;
	FILE *fp;
	struct person p1;
	fp = fopen("Contacts.txt","rb");
	if(fp == NULL) {
	printf("File can't open!");
	return;
		}
	clrscr();
	printf("==========Contact list==========\n\n");
	while(fread(&p1,sizeof(p1),1,fp) > 0) 
	{	noOfContacts++;
		printf("(%d)Name: ",noOfContacts);
		fputs(p1.name,stdout);
		printf("\n   Number: %lld\n\n",p1.number);
	}
	fclose(fp);
	getch();
	main();
}
char* searchContact(char action) {
	char isFound = 'n';
	FILE *fp;
	struct person p1;
	fp = fopen("Contacts.txt","rb");
	if(fp == NULL) {
	printf("File can't open!");
		}
	printf("Enter the name to search: ");
	getchar();
	gets(name);		
	while(fread(&p1,sizeof(p1),1,fp) > 0) 
	{
		if(strcmp(p1.name,name) == 0) 
		{	isFound = 'y';
			break;
		}
	}
	if(isFound == 'y') {
		printf("Contact find:-\n");
		printf("Name: ");
		fputs(p1.name,stdout);
		printf("\nNumber: %lld\n",p1.number);
		if(action == 'd') {
		return &name;	}
		else{
		getch();
		main();
		}
	}
	else
	{
		printf("Contact not found!");
	}
	fclose(fp);
	getch();
	if(action == 's')
	main();
	return NULL;
}
void updateContact(char action) {
	int userInput;
	char isFound = 'n';
	FILE *fp;
	fp = fopen("Contacts.txt","rb");
	if(fp == NULL) {
	printf("File can't open!");
		}
	printf("Enter the name to search: ");
	getchar();
	gets(name);		
	while(fread(&p1,sizeof(p1),1,fp) > 0) 
	{
		if(strcmp(p1.name,name) == 0) 
		{	isFound = 'y';
			break;
		}
	}
	if(isFound == 'y') {
		printf("Contact find:-\n");
		printf("Name: ");
		fputs(p1.name,stdout);
		printf("\nNumber: %lld\n",p1.number);
	}
	else
	{
		printf("Contact not found!");
		getch();
		main();
	}
	if(isFound == 'y') {
	printf("Choose, What you want to update:-\n[1] Name\n[2] Number\n\nYour choice: ");
		
		takeInputAgainForUpdate:
		scanf("%d",&userInput);
		
		if(userInput == 1) {
		printf("\nEnter new name: ");
		getchar();
		gets(name);
		number = p1.number;	
	while(fread(&p1,sizeof(p1),1,fp) > 0)
		{	
		if(strcmp(p1.name,name) != 0) {
		FILE *nfp;
		nfp = fopen("temp.txt","ab");
		if(nfp == NULL) 
		printf("\nFILE can't find.\n");
		fwrite(&p1,sizeof(p1),1,nfp);
		fclose(nfp);
			}
		}
		remove("Contacts.txt");
		rename("temp.txt","Contacts.txt");
		fclose(fp);	
		addContact(name,number,'u');	
		}
		else if(userInput == 2) {
		printf("\nEnter new number: ");
		scanf("%lld",&number);
		strcpy(name,p1.name);	
	while(fread(&p1,sizeof(p1),1,fp) > 0)
		{	
		if(strcmp(p1.name,name) != 0) {
		FILE *nfp;
		nfp = fopen("temp.txt","ab");
		if(nfp == NULL) 
		printf("\nFILE can't find.\n");
		fwrite(&p1,sizeof(p1),1,nfp);
		fclose(nfp);
			}
		}
		remove("Contacts.txt");
		rename("temp.txt","Contacts.txt");
		fclose(fp);
		addContact(name,number,'u');
		}
		else	{
		printf("Wrong input.Choose correct option: ");
		goto takeInputAgainForUpdate;
		}
		printf("Contact updated succesfully.");
	}
}

void deleteContact(char action) {
	char userInput,*name;
	struct person p;
	if(action != 'u')
	name = searchContact('d');
	FILE *fp;
	fp = fopen("Contacts.txt","rb");
	if(fp == NULL) {
	printf("File can't open!");
		}
	if(action == 'd' && name != NULL){ 
	printf("\nDo you really want to delete this contact[Y/N]? :");
	scanf("%c",&userInput);}
	
	if(userInput == 'y' || userInput == 'Y') {	
	while(fread(&p1,sizeof(p1),1,fp) > 0)
	{	
		if(strcmp(p1.name,name) != 0) {
		FILE *nfp;
		nfp = fopen("temp.txt","ab");
		if(nfp == NULL) 
		printf("\nFILE can't find.\n");
		fwrite(&p1,sizeof(p1),1,nfp);
		fclose(nfp);
			}
		}
	if(action == 'd')
	printf("\nContact deleted succesffuly\n");
	}
	remove("Contacts.txt");
	rename("temp.txt","Contacts.txt");
	fclose(fp);
	getch();
	main();	
}
