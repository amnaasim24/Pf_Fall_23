// Programmer: Amna Asim
// Date: 24th October, 2023
// Lab 8
// Question 2
// Description: Write a C program with a user-defined function calculate to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The program should take two numbers and an operation choice as input, and then use the function to perform the operation.



#include<stdio.h>

	void calculate(int num1, int num2, char operation) { // Declaring variables in function.
	
		int sum, diff, product, quotient; // intializing variables for switch case.
		switch(operation) { // switch case for the type of operator wanting to be used by user.
			case '+':
				sum = num1 + num2;
				printf("The SUM of the two numbers is:	%d",sum);
				break;
			case '-':
				diff = num1 - num2;
				printf("The DIFFERENCE of the two numbers is:	%d",diff);
				break;
			case '*':
				product = num1 * num2;
				printf("The PRODUCT of the two numbers is:	%d",product);
				break;
			case '/':
				quotient = num1 / num2;
				printf("The QUOTIENT of the two numbers is:	%d",quotient);
				break;		
		}	// end switch case
	} // end function
	int main() { 
		int num1, num2;
		char operation; 
			printf("Please enter the first number:	");
			scanf("%d", &num1);
			printf("Please enter the second number:	");
			scanf("%d", &num2);
			printf("Please enter the operation you want to use:	");
			scanf(" %c", &operation);
			calculate(num1, num2, operation);
		return 0;
	} // end main
	
