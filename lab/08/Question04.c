/* Programmer: Amna Asim
 Date: 24th October, 2023
 Lab 8
 Question 4
 Description: Your task is to create a C program that performs password length validation and user authentication based on the
 given requirements below:
 	a) Prompts the user to enter a password.
 	b) Validates the entered password by checking if it is at least 8 characters long.
 	c) If the password meets the length requirement, the program should compare it to a stored password
 	   "Secure123."
 	d) If the entered password matches the stored password, display "Login successful. Welcome!" Otherwise,
	   display "Login failed. Incorrect password."
*/



#include<stdio.h>
#include<string.h>

	int main(){
	char password[100];

	printf("Enter the password: ");
	scanf("%s",password);
	int check;
	if(strlen(password)>=8) {
		check=(strcmp("secure123", password));
		if(check==0) {
			printf("login successfull, WELCOME!\n");
		}
	}
	else {
		printf("login failed, incorrect password");
	}

	return 0;
}

