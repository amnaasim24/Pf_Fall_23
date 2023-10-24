// Programmer: Amna Asim
// Date: 24th October, 2023
// Lab 8
// Question 5
// Description: write C program that helps users decide whether they should use their car on a particular day of the week.



#include<stdio.h>
#include<stdbool.h>

	bool decideCarUsage(int numericpart, int day) {
		if(numericpart%2==0) {
			if(day%2==0){
				return 1;
			}
		}
		else if(numericpart%2!=0) {
			return 0;
		}
	}
	
	void main() {
		int numericpart, day;
		printf("Please enter the numeric part of the car: ");
		scanf("%d", &numericpart);
		printf("Please enter the day: ");
		scanf("%d", &day);
		printf("%d", decideCarUsage(numericpart, day));
	}
