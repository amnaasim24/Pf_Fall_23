// Programmer: Amna Asim
// Lab Task 05
// Question 4

#include<stdio.h>
int main() {

	char ans;
	int op1, op2;

	printf("a\t+\nb\t-\nc\t/\nd\t*\n");
	printf("Please choose menu option:\t");
	scanf(" %c",&ans);
	printf("Please enter op1:\t");
	scanf("%d",&op1);
	printf("Please enter op2:\t");
	scanf("%d",&op2);
	switch(ans) {
		case'+':
			printf("The SUM is:\t%d",op1+op2);
			break;
		case'-': 
			printf("The DIFFERENCE is:\t%d",op1-op2);
			break;
		case'*':
			printf("The MULTIPLICATION is:\t%d",op1*op2);
			break;
		case'/':
			printf("The DIVISION is:\t%d",op1/op2);
			break;
		default:
			printf("Please choose a different menu option.");
			break;
	}

	return 0;

}