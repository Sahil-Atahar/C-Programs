#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generateBill();
void showAllBills();
void searchBill(char);
void deleteBill(char []);

void generateBillFooter(char [] ,int ,float);

struct items
{
	char name[30];
	float unitPrice;
	int quantity;
};

void generateBillBody(char [],char [],int ,struct items *,float);

struct order 
{
	char customerName[20];
	char date[15];
	int noOfItems;
	float paidAmount;
	struct items item[50];
};
int main()
{
	clrscr();
	int userInput;
	
	printf("\n**************XYZ Shop***************\n\n");
	printf("Please select your prefered operation:\n\n1- Generate Bill.\n2- Show All Bills.\n3- Search Bill.\n4- Delete Bill.\n5- Exit.\n\nYour choice: ");	
	takeInputAgain:	
	scanf("%d",&userInput);
	
	switch(userInput)
	{
		case 1:
			generateBill();
			break;
		case 2:
			showAllBills();
			break;
		case 3:
			searchBill('s');
			break;
		case 4:
			searchBill('d');
			break;
		case 5:
			exit(0);
		default:
			printf("Wrong input,Please choose correct option: ");
			goto takeInputAgain;
	}
	getch();
	return 0;
}

void generateBill() {
	
	clrscr();
	struct order ord;
	char input;
	float totalAmount = 0;
	printf("\n*********Generate Bill Option**********\n\n");
	printf("Enter the name of customer: ");
	getchar();
	gets(ord.customerName);
	printf("Enter the number of items to enter: ");
	scanf("%d",&ord.noOfItems);
	
	for(int i = 0; i < ord.noOfItems ; i++) {
		printf("\n");
		printf("Enter the item %d: ",i+1);
		getchar();
		gets(ord.item[i].name);
		printf("Enter the unit price: ");
		scanf("%f",&ord.item[i].unitPrice);
		printf("Enter the quantity: ");
		scanf("%d",&ord.item[i].quantity);
		totalAmount += ord.item[i].unitPrice*ord.item[i].quantity;
		}
				
	strcpy(ord.date,__DATE__);
		
	printf("\n***********Bill Receipt***********\n\n");
	generateBillBody(ord.customerName,ord.date,ord.noOfItems, ord.item,totalAmount);
		
	printf("\nBill genereated successfully\n");
	printf("\n\nChoose an option: \n1- Total amount paid.\n2- Some amount paid.\n3- Total unpaid.\nYour choice: ");
	scanf("%c",&input);
	switch(input)
	{
		case '1':
		ord.paidAmount = totalAmount;
		printf("\n\nDo you want to save this bill[Y/N]: ");
		scanf("%c",&input);
		break;
		case '2':
		printf("Enter the paid amount: ");
		scanf("%f",&ord.paidAmount);
		input = 'y';
		break;
		case '3':
		ord.paidAmount  = 0;
		input = 'y';
	}
	if(input == 'y' || input == 'Y') {
		FILE *fp;
		fp = fopen("CustomerBillRecords.txt","ab");
		if(fp == NULL) {
		printf("File can't open\n");
		exit(0);	}
		else
		{
			fwrite(&ord,sizeof(ord),1,fp);
			fclose(fp);
			printf("Bill saved Succesfully.\n");
			getch();
			main();
		}
	}
	else
	main();
}
void generateBillBody(char customerName[20],char date[15],int noOfItems,struct items *item,float paidAmount) {
	
	float totalAmount = 0;
	printf("Customer Name: ");
	puts(customerName);
	
	printf("Date: ");
	puts(date);
	printf("----------------------------------\n");
	printf("Item Name\t\tQty\t\t\tAmount\n");
	printf("----------------------------------\n");
	for(int i = 0; i < noOfItems; i++) {
		generateBillFooter(item[i].name,item[i].quantity,item[i].unitPrice);
		totalAmount+=item[i].unitPrice*item[i].quantity;
		}
	printf("----------------------------------\n");
	printf("Total Amount:\t\t\t\t%.2f\n",totalAmount);
	
	if(paidAmount != totalAmount) {
	printf("\t\t\t\t\t\t\t------\n");
	printf("Paid Amount:\t\t\t\t%.2f\n",paidAmount);
	printf("----------------------------------\n");
	printf("UnPaid Amount:\t\t\t\t%.2f\n",totalAmount - paidAmount);
	}
	printf("\n\n***************************************\n\n");
}
void generateBillFooter(char itemName[20],int quantity,float unitPrice) {
	fputs(itemName,stdout);
	printf("\t\t\t%d",quantity);
	printf("\t\t\t%.2f\n",unitPrice*quantity);
}
void showAllBills() {
	clrscr();
	struct order ord;
	FILE *fp;
		fp = fopen("CustomerBillRecords.txt","rb");
		if(fp == NULL) {
		printf("File can't open\n");
		exit(0);	}
		else
		{
		printf("\n**********All Bill Receipts**********\n\n");
		while(fread(&ord,sizeof(ord),1,fp)>0) {
			
			generateBillBody(ord.customerName,ord.date,ord.noOfItems, ord.item,ord.paidAmount);
			printf("\n\n");
			}
			fclose(fp);
			getch();
			main();
			
		}
}

void searchBill(char action) {
	clrscr();
	char input = 'n',searchFound;
	struct order ord;
	char customerName[20];

	if(action == 'd')
	printf("**********Delete Bill Option**********\n\n");
	else
	printf("**********Search Bill Option**********\n\n");
	printf("Enter the customer name: ");
	getchar();
	gets(customerName);
	
	FILE *fp;
	fp = fopen("CustomerBillRecords.txt","rb");
	
	if(fp == NULL) {
	printf("File can't open\n");
	exit(0);	}
	else
	{

	while(fread(&ord,sizeof(ord),1,fp)>0) {
	if(strcmp(ord.customerName,customerName)==0) {
	searchFound = 'y';
	printf("\n\t\t-:Reciept Found:-\n\n");
	generateBillBody(ord.customerName,ord.date,ord.noOfItems, ord.item,ord.paidAmount);
			printf("\n\n");
	break;		}
	else
	searchFound  ='n';
			}
		}
	fclose(fp);
	if(searchFound == 'n') {
	printf("\nReciept not found.\n");
	printf("Press any key to continue...\n");
	}
	else if(action == 'd' && searchFound == 'y') {
	printf("Do you want to delete this reciept[Y/N]? ");
	scanf("%c",&input);
	if(input == 'y' || input == 'Y')
	deleteBill(customerName);	
	}
	getch();
	main();
}

void deleteBill(char customerName[20]) {
	struct order ord;
	FILE *fp;
	fp = fopen("CustomerBillRecords.txt","rb");
	if(fp == NULL) {
	printf("File can't open\n");
	exit(0);	}
	else
	{
	while(fread(&ord,sizeof(ord),1,fp)>0) {
	if(strcmp(ord.customerName,customerName) !=0)
	{	FILE *nfp;
		nfp = fopen("NewFile.txt","ab");
		fwrite(&ord,sizeof(ord),1,nfp);
		fclose(nfp);
		}
			}
	remove("CustomerBillRecords.txt");
	rename("NewFile.txt","CustomerBillRecords.txt");	
	fclose(fp);
	printf("\nReciept deleted succesfully.\n");
	getch();
	main();	
		}
}
