// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 1 [Pointers]
// Description: 
//		A. Desired result, that is the values of j and k are not swapped. Why is this? 
//		B. Modify the function swap and its call at line 12 to get the desired result.

/*Answer to part [A]:
	Because we need to use pointers to pass the addresses.
*/

#include<stdio.h>

void swap(int *a, int *b) {
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main() {
	int j=2, k=5;
	printf("j=%d, k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d, k=%d\n",j,k);
	return 0;
}
