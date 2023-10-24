// Programmer: Amna Asim
// Date: 24th October, 2023
// Lab 8
// Question 6
// Description:  Write a C program that defines a user-defined function processArray to calculate the sum, maximum, and minimum values in the array. The program should take the array and its size as parameters and use the function to compute these values.



#include<stdio.h>

void processArray(int size, int arr[]) {
	int i, sum=0;
	for(i=0; i<size; i++) {
		sum=sum+arr[i];
	}
	printf("The sum is: %d\n", sum);
	int max=arr[0];
	for(i=0; i<size; i++) {
		if(max<arr[i]) {
			max=arr[i];
		}
	}
	printf("Maximum: %d\n", max);
	
	int min=arr[0];
	for(i=0; i<size; i++) {
		if(min>arr[i]) {
			min=arr[i];
		}
	}
	printf("Minimum: %d\n", min);
}
int main() {
	int i, size;
	printf("Please enter the size of the array: ");
	scanf("%d", &size);
	
	int arr[size];
	for(i=0; i<size; i++) {
		printf("Please enter %d element:", i+1);
		scanf("%d", &arr[i]);
	}
	processArray(size, arr);
	return 0;
}
