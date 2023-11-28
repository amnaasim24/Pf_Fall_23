// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 3 [Pointers]


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {

    char arr_char[N];
    int arr_int[N];
    long long int arr_longlong[N];

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        arr_char[i] = rand() % 26 + 'a';
        arr_int[i] = rand() % 1000000;
        arr_longlong[i] = rand() % 1000000000000LL;
    }

  
    for (int i = 0; i < N; i++) {
        printf("Address of arr_char[%d]: %p, Value: %c\n", i, (void *)&arr_char[i], arr_char[i]);
        printf("Address of arr_int[%d]: %p, Value: %d\n", i, (void *)&arr_int[i], arr_int[i]);
        printf("Address of arr_longlong[%d]: %p, Value: %lld\n", i, (void *)&arr_longlong[i], arr_longlong[i]);
    }

    return 0;
}
