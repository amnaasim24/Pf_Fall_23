//Programmer: Amna Asim
//Lab Task 05
//Question 5

#include<stdio.h>
int main() {

	char c;
	printf("Please enter the character:\t");                  
	scanf("%c",&c);
	if(c>=97&&c<=122) {
		printf("It is a lower case letter\n");
	}
		else if (c>=65&&c<=90) {
			printf("It is an upper case letter\n");
		}
		else if(c>=48&&c<=57) {
			printf("It is a digit\n");
		}
		else if((c>=0&&c<=47) || (c>=58&&c<=64) || (c>=91&&c<=96) || (c>=123&&c<=126)) {
			printf("It is a speical character\n");
		}
	else {
		printf("Please give a different option\n");
	}

	return 0;
    
}