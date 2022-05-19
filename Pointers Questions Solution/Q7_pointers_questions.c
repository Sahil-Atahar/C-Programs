#include <stdio.h>
#include <conio.h>
int main()
{
	int n = 5,arr[n],i,num,index = 0;
	int *parr,*nump;
	
	//Providing the address of array & variable
	parr = &arr;
	nump = &num;
	
	//Taking user input
	printf("Enter 5 Elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d",parr+i);
		}
	//Taking the number for Search
	printf("Enter the number for searching: ");
	scanf("%d",nump);
		
    //Searching the array elements		
	for(i = 0; i < n; i++) {
	   	if(*nump== *(parr+i)) {
	   	index = i;
	   	break;
	   		}
		}
	//Displaying the result
	if(index != 0) 
	printf("Element found: \nAt %d place\nAt %d index",i+1,i);
	else
	printf("Element not found in array");
  getch();
  return 0;
}
