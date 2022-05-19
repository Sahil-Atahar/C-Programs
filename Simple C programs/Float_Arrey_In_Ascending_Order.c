#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	float arr[5],temp;
	int i,j;
	for(i=0;i<5;i++){
		printf("Enter the index[%d]: ",i);
		scanf("%f",&arr[i]);
		}
	for(i=0;i<5;i++){
		printf("%.2f ,",arr[i]);
		}
	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(arr[i]<arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	}
				}
		}
	for(i=0;i<5;i++){
		printf("%.2f ,",arr[i]);
		}
	getch();		
	return 0;
}
