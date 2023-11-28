// Programmer: Amna Asim
// Date: 14th November, 2023
// Lab 10
// Question 3



#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
           return 0;
    }
    return 1;
}

int next_prime(int n) {
    do {
      n++;
    } while (!is_prime(n));
   	     return n;
}

void fill_2D_array(int **arr, int rows, int columns) {
    int num = 2;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = num;
            num = next_prime(num);
        }
    }
}

int main() {
    int rows = 3;
    int columns = 4;
    int **arr = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *) malloc(columns * sizeof(int));
    }

    fill_2D_array(arr, rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
