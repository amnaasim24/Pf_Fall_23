// Programmer: Amna Asim
// Lab 7
// Question 7
// Dsecription: Take 2 2x2 matrices as input in a 2D array. Then, multiply the 2 matrices and print the final output matrix.



#include<stdio.h>
int main() {

	int matrix1[2][2];
	int matrix2[2][2];
	int ans[2][2];
	int i,j,sum;
	printf("\nEnter the elements of matrix 1:\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) 
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\nEnter the elements of matrix 2:\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			int k=0;
			sum =0;
			for(k=0;k<2;k++) {
				sum = sum+(matrix1[i][k]*matrix2[k][j]);
				ans[i][j]=sum;
			}
		}
	}
	printf("\nThe resultant matrix is:\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d\t", ans[i][j]);
		}
		printf("\n");
	}
}//end main
