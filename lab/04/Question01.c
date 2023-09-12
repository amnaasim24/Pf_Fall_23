/*
 *Programmer: Amna Asim
 *Date: 11th september, 2023
 *Description:Lab 4, Question 1.
 */

#include <stdio.h>
int main() {
	int i=1, r,n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	while(i<=n) {
		r=i;
		i=i+1;
		while(r>0) {
			r=r-1;
			printf("*");
			}
	printf("\n");
	}
return 0;
}