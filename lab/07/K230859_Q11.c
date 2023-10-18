// Programmer: Amna Asim
// LAB 7
// Question 11
// Description: find the largest value in every contiguous 3x3 matrix in the grid. Return the generated matrix.



#include<stdio.h>
int main() {
	int i, j, x, y,n;
	printf("\nEnter the rows and columns: ");
	scanf("%d",&n);
	int grid[n][n];
	int maxLocal[n-2][n-2];
	printf("\nEnter the elements for your grid matrix: ");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("\nEnter element number %d%d: ",i,j);
			scanf("%d",&grid[i][j]);
		}
	}
	if(n<3) {
		printf("\nEnter a larger number of rows and columns and try again");
	}
	else {
		for(i=1;i<n-1;i++) {
			for(j=1;j<n-1;j++) {
				int maxValue=grid[i-1][j-1];
				for(x=i-1;x<=i+1;x++) {
					for(y=j-1;y<=j+1;y++) {
						if(grid[x][y]>maxValue) {
							maxValue=grid[x][y];
						}
					}
				}
				maxLocal[i-1][j-1]=maxValue;
			}
		}
		printf("\nThe maxLocal matrix is:\n ");
		for(i=0;i<n-2;i++) {
			for(j=0;j<n-2;j++) {
				printf("%d\t",maxLocal[i][j]);
			}
			printf("\n");
		}
	}
} // end main
