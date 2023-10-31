// Programmer: Amna Asim
// Assignment 02
// Question 01
// Description: Using 2D arrays, calculate performance of each player in a cricket team and display it appropriately

#include <stdio.h>

int main() {
	int batsmen, innings, performance[100][100];
	printf("Enter the number of batsmen: ");
	scanf("%d", &batsmen);
	printf("Enter the number of innings: ");
	scanf("%d", &innings);
	int i , total, max, cent, half_cent;
	for (i = 0, total, max, cent, half_cent; i < batsmen; i++) {
		total = 0, max = 1 << 31, cent = 0, half_cent = 0;
		int j;
		for (j = 0; j < innings; j++) {
			printf("Enter runs for batsman #%02d's inning #%02d: ", i+1, j+1);
			scanf("%d", &performance[i][j]);
			total += performance[i][j];
			if (performance[i][j] > max) max = performance[i][j];
			if (performance[i][j] >= 100) cent++;
			else if (performance[i][j] >= 50) half_cent++;
		}
		printf("\nTotal runs: %d\nAverage run: %.2f\nHighest runs: %d\nCenturies: %d\nHalf centuries: %d\n", 
			total, 
			(float) total / innings,
			max,
			cent,
			half_cent
		);
	}
  
	return 0;
} 
