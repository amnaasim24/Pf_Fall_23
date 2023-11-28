// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 4 [Recursions]

#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n <= 0) {
        return;
    }
    
    printf("%d ", a);
    fibonacci(n-1, b, a+b);
}

int main() {
    int n = 10;  
    int a = 0, b = 1;  
    printf("enter n: ");
    scanf("%d",&n);
    printf("\n");
    fibonacci(n, a, b);

    return 0;
}

