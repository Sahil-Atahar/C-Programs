#include <stdio.h>
#include<conio.h>

int main()
{ 
	int m,n,i,j;
	printf("Enter the no of rows and columns: ");
	scanf("%d%d",&m,&n);
	int matrix1[m][n];
	int matrix2[m][n];
	int sum[m][n];
	printf("Enter the %d elements of first matrix: ",m*n);
	for(i = 0; i < m ; i++) {
		for (j = 0 ; j < n ; j++ ) {
			scanf("%d",&matrix1[i][j]);
			}
	 }
	 
	 printf("Enter the %d elements of second matrix: ",m*n);
	for(i = 0; i < m ; i++) {
		for (j = 0 ; j < n ; j++ ) {
			scanf("%d",&matrix2[i][j]);
			}
	 }
	 printf("After sum of matrix, Elements are: \n\n");
	 for(i = 0; i < m ; i++) {
		for (j = 0 ; j < n ; j++ ) {
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%2d    ",sum[i][j]);
			}
			printf("\n");
	 }
	 getch();
	return 0;
}
