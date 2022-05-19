#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	//declaretion  of variables
	int n = 3, i, j, temp;
	int matrix[n][n];
	//declaration of matrices
	printf("Enter %d elements of matrix: ",n*n);
	//scanning the matrix elements of the matrix
	for(i = 0 ;i < n; i++ ){
	   for(j = 0 ; j < n; j++ ){
	   scanf("%d",&matrix[i][j]);
	   }
	}
	//printing thematrix before transpose
	printf("Printing the matrix before transpose: \n");
	for(i = 0 ;i < n; i++ ){
	   for(j = 0 ; j < n; j++ ){
		printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}
	//doing transpose of matrix
	for(i = 0 ;i < n; i++ ){
	   for(j = i+1 ; j < n; j++ ){
		temp = matrix[i][j];
		matrix[i][j] = matrix[j][i];
		matrix[j][i] = temp;
		}
	}
	//printing thematrix after transpose
	printf("Printing the matrix after transpose: \n");
	for(i = 0 ;i < n; i++ ){
	   for(j = 0 ; j < n; j++ ){
		printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}

	getch();
	return 0;
}

