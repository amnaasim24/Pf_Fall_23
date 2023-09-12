/*
 *Programmer: Amna Asim
 *Date: 11th september, 2023
 *Description:Lab 4, Question 2.
 */

#include <stdio.h>
int main() {
	int i, r, n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	i=1;
	while(i<=n) {
		r=1;
		while(r<=n) {
			printf("*");
			r=r+1;
		}
		printf("\n");
		i=i+1;
	}
return 0;
}