// Programmer: Amna Asim
// Lab 06
// Question 2 - Fibonacci Series along with its sum


#include<stdio.h>
int main() {

	int a=0, b=1, c, sum=0; // Initalzation
	for(c=0; c<=10000; ) { // beginning for loop to find the sum
		printf("%d\t", c);
		if(c%3==0 || c%5==0 || c%7==0) { // test condition to see if it is divisble by 3,5 or 7
			sum=c+sum;
		} // end if
		a=b;
		b=c;
		c=a+b;
	} // end for loop
	printf("The sum is:%d\n", sum);
return 0;
} // end main






