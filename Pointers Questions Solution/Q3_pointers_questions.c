#include <stdio.h>
#include <conio.h>
int main()
{
	int arr[5],i;
	int *parr = &arr;
	
	printf("Enter 5 Elements: ");
	//Taking user input
	for(i = 0; i < 5; i++) {
		scanf("%d",parr+i);
		}
	
	//Displaying the array elements
	for(i = 0; i < 5; i++) {
		printf("%d ",*(parr+i));
		}
		
	getch();
	return 0;
}
