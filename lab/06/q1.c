// Progrmmer: Amna Asim
// LAB 06
// Question 1


#include<stdio.h>
int main() {

	int num, sum=0, i=1, a; // Initialization step
	printf("Please enter the number:");
	scanf("%d", &num);
	for(i=1; i<num; i++) { //begining for loop
		if(num%i==0) { // test condition to see if remainder is equa to zero or not
			a=i; // giving value of i to variable a
			sum=sum+a; // taking the sum of factors
		}
	} //ending for loop
	if(sum==num) { // test condition to check whether the sum is equal to num or not
		printf("It is a Perfect Number!\n"); // output
	}
	else {
		printf("It is NOT a Perfect Number!\n"); // output
	}
return 0;
} // End manin


