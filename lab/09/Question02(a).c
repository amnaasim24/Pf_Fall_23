// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 2 [Pointers]
/* Description: 
Given the function prototype below, implement the function that reverses the array passed
to its arguments. Also write the main function that demonstrates this by taking 10 inputs from
a user and storing them in an array. Print the array, then use our function reverse and print
the array again to show that array has been reversed successfully. Use pointers in the function
reverse.

	void reverse(int *arr, int size){
	}

*/



#include<stdio.h>

void reverse(int*arr, int size) {
	int *start=arr;
	int *end=arr+size-1;
	
	while(start<end) {
		int temp=*start;
		*start=*end;
		*end=temp;
		end--;
		start++;
	}
}
int main() {
	int i, arr[10];
	printf("Please enter ten integers: ");
	for(i=0; i<10; i++) {
		scanf("%d", &arr[i]);
	}
	printf("The Original Array is:\n");
	for(i=0; i<10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	reverse(arr,10);
	printf("The Reversed Array is:\n");
	for(i=0; i<10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

