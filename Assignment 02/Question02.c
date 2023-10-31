// Programmer: Amna Asim
// Assignment 02
// Question 02
// Description: finds largest submatrix of 1s

#include <stdio.h>

void show_matrix(int mat[][100], int n, int m) {
	int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < m; j++) {
			printf("%-*d", n, mat[i][j]);
		}
        printf("\n");
    }
} 

void input_matrix(int mat[][100], int n, int m) {
	int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < m; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
} 

int sum_submatrix(int mat[][100], int i, int j, int sq) {
    int sum = 0, n, m;
    for (n = i;n < sq + i; n++) {
		for (m = j;m < sq + j; m++) { 
			sum += mat[n][m];
		}
	}
    return sum;
} 

int find_largest_square(int mat[][100], int n, int m) {   
    int sq = (n > m) ? m : n;
    while (sq >= 2) {
    	int i;
        for (i = 0; i < n; i++) {
        	int j;
            for (j = 0; j < m; j++) {
                if (sq + i <= n && sq + j <= m && sum_submatrix(mat, i, j, sq) == sq*sq) 
				return sq;
            }
        }
        sq--;
    }
    return 0;
}
 
int main() {
    int n, m, arr[100][100] = {0};
    do {
        printf("Enter dimensions of matrix (NxM): ");
        scanf("%dx%d", &n, &m);
    } 
	while (n < 2 || m < 2);
    
    input_matrix(arr, n, m);
    printf("Your matrix:\n");
    show_matrix(arr, n, m);
    printf("\n");

    int sq = find_largest_square(arr, n, m);
    (!sq) ? printf("No square matrix of size >= 2x2 found") : printf("Largest square matrix of size %dx%d found", sq, sq);
    return 0;
}
