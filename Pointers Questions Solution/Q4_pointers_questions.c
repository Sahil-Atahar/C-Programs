#include <stdio.h>
#include <conio.h>
int main()
{
	//declaration of array and pointers
	int farr[5],sarr[5],i;
	int *fparr,*sparr;
	
	//Providing addresses of array to pointers
	fparr = &farr;
	sparr = &sarr;
	//taking user input
	printf("Enter 5 Elements: ");
	for(i = 0; i < 5; i++) {
		scanf("%d",&farr[i]);
		}
	//coping the array elements	
	for(i = 0; i < 5; i++) {
		*(sparr + i)=*(fparr + i);
		}
	//printing the second array	
	for(i = 0; i < 5; i++) {
		printf("%d ",sarr[i]);
		}
	getch();
	return 0;
}
