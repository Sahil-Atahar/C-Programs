#include <stdio.h>
#include <conio.h>
int main()
{
	int n = 5,arr[n],i,temp;
	int *parr;
	
	//Providing address of array to pointer
	parr = &arr;
	
	//Taking user input
	printf("Enter 5 Elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d",parr+i);
		}
    //Reversing the array elements		
	for(i = 0; i < n/2; i++) {
		temp = *(parr + i);
	    *(parr + i) = *(parr + n - i - 1);
	    *(parr + n - i - 1) = temp;
		}
	
	//Displaying the array elements		
	for(i = 0; i < n; i++) {
		printf("%d ",*(parr+i));
		}
	getch();
	return 0;
}
