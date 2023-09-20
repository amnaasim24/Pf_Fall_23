// Programmer: Amna Asim
// Lab Task 05
// Question 2

#include<stdio.h>
int main() {
    
	int time;
	printf("Please enter the time:\t");
	scanf("%d", &time); 
	if(time>0 && time<=24) {
		if (time>=5 && time<=11) {
			printf("Good Morning!");
		}
		else if (time>=12 && time<=18) {
			printf("Good Evening!");
		}
		else if( time>18 && time<=24) {
			printf("Good Night!");
		}
	else {
		printf("invalid");
	}
	}

    return 0;

}