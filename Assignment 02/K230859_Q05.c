// Programmer: Amna Asim
// Assignment 02
// Question 05
// Description: prints out ramanujan numbers within n^3


#include <stdio.h>
#include <conio.h>

int check(int *arr, int n, int num) {
	int i;
	for (i = 0; i < n; i++) {
		if (*(arr + i) == num) {
			return 1;
		}
	}
	return 0;
} 

void ramanujan_hardy(int num) {
	int magic_num_arr[1000] = {0}, nums = 0;
	int i;
	for (i = 0; i < num*num*num; i++) {
		int j;
		for (j = 0; j < num*num*num; j++) {
			int k;
			for (k = 0; k < num*num*num; k++) {
				int l;
				for (l = 0; l < num*num*num; l++) {
					int magic_num = k*k*k + l*l*l;
					if (i != j && i != k && i != l && i*i*i + j*j*j == magic_num) {
						int exists = check(magic_num_arr, nums, magic_num);
						if (!exists) {
							printf("%d ", magic_num);
						}
						magic_num_arr[nums] = magic_num;
						nums++;
					}
				}
			}
		}	
	}
}

int main() {
	int n;
	printf("Enter number 'n' to get magic numbers less than n^3: ");
	scanf("%d", &n);
	ramanujan_hardy(n);
	return 0;
}
