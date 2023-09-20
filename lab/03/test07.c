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
	if(ans=='+') {
		printf("The SUM is:\t%d",op1+op2);
	} 
	else if(ans=='-') {
		printf("The DIFFERENEC is:\t%d",op1-op2);
	}
	else if (ans=='*') {
		printf("The MULTIPLICATION is:\t%d",op1*op2);
	}
	else if(ans=='/') {
		printf("The DIVISION is:\t%d",op1/op2);
	}
	else {
		printf("Please choose a different menu option.");
	}

	return 0;

}