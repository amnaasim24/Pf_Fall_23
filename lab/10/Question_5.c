// Programmer: Amna Asim
// Date: 14th November, 2023
// Lab 10
// Question 5



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiply_and_divide(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = (arr[i][j] * 3) / 2;
        }
    }
}

int main() {
    int M, N;
    printf("Enter the number of rows (between 1 and 800): ");
    scanf("%d", &M);
    printf("Enter the number of columns (between 1 and 800): ");
    scanf("%d", &N);

    int *arr1 = (int *)malloc(M * N * sizeof(int));
    int **arr2 = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        arr2[i] = arr1 + i * N;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            arr1[i * N + j] = arr2[i][j] = (i + 1) * (j + 1);
        }
    }

    clock_t start_time = clock();
    multiply_and_divide(M, N, arr1);
    double time_taken_1 = (double)(clock() - start_time) / CLOCKS_PER_SEC;

    start_time = clock();
    multiply_and_divide(M, N, arr2);
    double time_taken_2 = (double)(clock() - start_time) / CLOCKS_PER_SEC;

    printf("Time taken for 1st array: %f seconds\n", time_taken_1);
    printf("Time taken for 2nd array: %f seconds\n", time_taken_2);

    free(arr1);
    free(arr2);

    return 0;
}
