// Programmer: Amna Asim
// Lab 07
// Question 1
// Description: Take Two numbers from user and divide both numbers but do not use the division operator.



#include<stdio.h>
int main() {

	int num1, num2, quot=0, rem=0;
	printf("Please enter the first number:");
	scanf("%d", &num1);
	printf ("Please enter the second number:");
	scanf("%d", &num2);
	if(num2==0) {
		printf("INVALID! Number cannot be zero.");
	}
	while(num1>=num2) {
		num1=num1-num2;
		quot++;
	}
	rem=num1;
	printf("quot:%d, rem:%d", quot, rem);
	
return 0;
} // end main