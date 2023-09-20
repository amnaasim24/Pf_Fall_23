// Programmer: Amna Asim
// Lab Task 05
// Question 1

#include<stdio.h>
int main() {

	int num;
	printf("enter the number you want to check:\t ");
	scanf("%d", &num);
	if(num%3==0) {
		printf("the number is multiple of 3\n");
	}
	else {
		printf("the number is not multiple of 3\n");
	} 

	return 0;

}	