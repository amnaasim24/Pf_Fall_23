// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 1 [Recursions]
// Description: Write a function for finding factorial of any integer N using recursion.



#include<stdio.h>

void factorial(int N) {
	if(N==1) {
	return 1;
	}
	//Recursive Case
	else {
		int r=N*factorial(N-1);
		return r;
	}
} // end function

int main() {
	int ans=factorial(5);
	printf("%d", ans);
} // end main

