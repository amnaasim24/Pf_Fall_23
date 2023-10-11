// Programmer: Amna Asim
// LAB 7
// Question 8
// Description: Take an array with N elements as input, and sort the array into ascending order and then print the sorted version.
// Input: {6, 3, 2, 7, 1, 5}
// Output: {1, 2, 3, 5, 6, 7}



#include<stdio.h>
int main() {
	
	int n, i,j, min, temp;
	printf("\nPlease enter the size of your array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("\nPlease enter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nThe original array is:\n");
	for(i=0;i<n;i++) {
		printf("%d, ",arr[i]);
	}
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(arr[i]>arr[j]) {
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++) {
		printf("%d, ",arr[i]);
	}
}//end main
