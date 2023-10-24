// Programmer: Amna Asim
// Date: 24th October, 2023
// Lab 8
// Question 1
// Description: Create a C program that swaps the values of two integers using a user-defined function, swapIntegers. It should perform the swap, and display the updated values.



#include<stdio.h>

	void swapIntegers(int num1, int num2) { // Declaring variables in the function
		int temp; // intialising variable 
		printf("Please enter the first Number: "); // Prompting user for an input
		scanf("%d", &num1); // scanning the value input by the user
		printf("Please enter the second Number: "); // Prompting user for another input
		scanf("%d", &num2); // scanning the value input by the user
		temp=num1; // storing the value of num1 int temp
		num1=num2; // storing the value of num2 in num1
		num2=temp; // storing the vale of temp in num2
		printf("The first Number after swapping is: %d\n", num1);
		printf("The second Number after swapping is: %d\n", num2);
	} // End function
	int main() {
		int num1, num2;
		swapIntegers(num1, num2);
	}
