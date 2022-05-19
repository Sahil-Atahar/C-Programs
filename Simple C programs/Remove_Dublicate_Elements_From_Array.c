#include <stdio.h>
#include <conio.h>
int main()
{
	int arr[7];
	for(int i = 0; i< 7 ; i++){
		printf("Enter the element[%d]: ",i);
		scanf("%d",&arr[i]);
		}
	for(int i = 0; i< 7 ; i++){
		printf("%d\n",arr[i]);
		}
		printf("\n");
	for(int i = 0; i< 7 ; i++){
		for(int j=i+1; j< 7 ; j++){
		if(arr[i] == arr[j]){
			arr[j] = 0;  }
		}
		}
	for(int i = 0; i< 7 ; i++){
		printf("%d\n",arr[i]);
		}
		
	return 0;
}