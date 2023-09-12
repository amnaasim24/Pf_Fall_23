/*
 *Programmer: Amna Asim
 *Date: 11th september, 2023
 *Description:Lab 4, Question 4.
 */

#include <stdio.h>
int main() {
	float a, b, c;
	float x1=0, x2=0;
	printf("\n Enter the value of a:");
	scanf("%f", &a);
	printf("\n Enter the value of b:");
	scanf("%f", &b);
	printf("\n Enter the value of c:");
	scanf("%f", &c);
	if(a==0) {
		printf("Invalid value of coefficient of X Square.");
	}
	else {
		x1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
		x2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
			if((pow(b,2)-(4*a*c))>0)
			{
				printf("\n x1=%f and x2=%f", x1, x2);
			}
			else
			{
				printf("\n roots are imaginary");
			}
	}
}