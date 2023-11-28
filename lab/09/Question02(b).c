// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 2 [Recursions]

#include <stdio.h>

int product(int n, int m) {
    if (m == 0) {
        return 0;
    } else if (m > 0) {
        return (n + product(n, m - 1));
    } else {
        return -product(n, -m);
    }
}

int main() {
    int n, m;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &m);

    int result = product(n, m);
    printf("Product of %d and %d is: %d\n", n,m, result);

    return 0;
}
