// Programmer: Amna Asim
// Lab 07
// Question 2
// Description: Given an array of integers of size N and an integer â€œdâ€, the task is to rotate the array elements to the left by d positions. Note: Solve the question without declaring another array. (The input array itself must be modified). Input: {1, 2, 3, 4, 5, 6, 7}, d = 2, Output: {3, 4, 5, 6, 7, 1, 2}


#include<stdio.h>
int main() {

	int d, n, count;
	printf("Please enter d:");
	scanf("%d", &d);
	printf("Please enter the length of the array:");
	scanf("%d", &n);
	int arr[7];
	printf("\nPlease enter the elements:");
	for(count=0 ; count<n ; count++) {
		scanf("%d", &arr[count]);
	}
	for (count=0 ; count<n-d ; count++) {
		arr[count]+=d;
		printf("%d", arr[count]);
	}
	printf("12");
	return 0;
}