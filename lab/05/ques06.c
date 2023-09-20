//programmer:Amna Asim
//Lab Task 05
//Question 6

#include<stdio.h>
int main() {

	int num; 
	printf("Please enter the 8 bit number:");
	scanf("%d",&num);
	if(( num / 1000) % 10 >= 1) {
		printf("The 4th bit is on\n");
		num = num - 1000;
	}
	if((num / 1000000) % 10 >= 1) {
		printf("The 7th bit is on\n");
		num = num - 1000000;
	}
	printf("The number after turning off the bits is: %d", num);
    
return 0;

}