// Programmer: Amna Asim
// Date: 24th October, 2023
// Lab 8
// Question 3
/* Description: Create a C program that reads a text input from the user and searches for a specific character (e.g., 'a')
within the text using the strchr function. Display the total count of occurrences of the character in the input text.
*/



#include<stdio.h>
#include<string.h>
int main() {

	int i, count=0;
	char str[20], ch;
	printf("Please enter your text: ");
	gets(str);
	printf("%s",str);
	printf("\nPlease enter the letter you want to find: ");
	scanf("%c",&ch);
	for(i=0;str[i] != '\0';i++) {
		if(str[i]==ch) {
			count++;
		}
	}
	printf("\nThe number of occurences of letter a in the given text is: %d",count);
}
