// Programmer: Amna Asim
// Lab 07
// Question 3
// Description: Take a number from user and count the sum of their digits.



#include<stdio.h>
int main() {

	int sum=0, count, n, arr[n];
	printf("Please enter the length of array:");
	scanf("%d", &n);
	printf("Please enter the elements:");
	for( count=0; count<n; count++) {
		scanf("%d", &arr[count]);
	}
	for( count=0; count<n; count++){
		sum=sum+arr[count];
	}
	printf("%d", sum);
	return 0;
}
