#include<stdio.h>
int main() {

	int w1=8, w2=12, w3=12, w4=9, numb_of_weeks=4;
	
	float total_hours=0, avg_hours=0;
	
	total_hours=w1+w2+w3+w4;
	avg_hours=total_hours/numb_of_weeks;
	printf("The average hours he voluntered per week are: %f",avg_hours);
    

	return 0;

}