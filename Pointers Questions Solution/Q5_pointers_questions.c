#include <stdio.h>
#include <conio.h>
int main()
{
	//declaration of array and pointers
	int farr[5],sarr[5],i, temp;
	int *fparr = &farr,*sparr = &sarr;
	
	//taking user input of first array
	printf("Enter 5 Elements of first array: ");
	for(i = 0; i < 5; i++) {
		scanf("%d",&farr[i]);
		}
	//taking user input of second array
	printf("Enter 5 Elements of second array: ");
	for(i = 0; i < 5; i++) {
		scanf("%d",&sarr[i]);
		}
	//printing first array before swap
	printf("Before swaping: \n");
	printf("5 Elements of first array are : ");
	for(i = 0; i < 5; i++) {
		printf("%d ",farr[i]);
		}
	printf("\n");
		
	//printing second array before swap
	printf("5 Elements of second array are: ");
	for(i = 0; i < 5; i++) {
		printf("%d ",sarr[i]);
		}
	printf("\n");
		
	//replacing the array elements	
	for(i = 0; i < 5; i++) {
		temp = *(fparr + i);
		*(fparr + i)=*(sparr + i);
		*(sparr + i) = temp;
		}
	//printing first array after swap
	printf("After swaping: \n");
	printf("5 Elements of first array are : ");
	for(i = 0; i < 5; i++) {
		printf("%d ",farr[i]);
		}
	printf("\n");
	//printing second array after swap
	printf("5 Elements of second array are: ");
	for(i = 0; i < 5; i++) {
		printf("%d ",sarr[i]);
		}
	printf("\n");
		
	getch();
	return 0;
}
