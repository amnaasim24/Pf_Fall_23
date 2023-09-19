// Programmer: Amna Asim
// Lab Task 05
// Question 3

#include<stdio.h>
int main() {

char question;
printf("Are you sure you to delete [Y/y] / [N/n]?:\t");
scanf("%c", &question);

switch(question) {

case 'Y':
printf("Deleted Successfully!\n");
break;

case 'y':
printf("Deleted Successfully!\n");
break;

case 'N':
printf("Delete Cancelled!\n");
break;

case 'n':
printf("Delete Cancelled!\n");
break;

default:
printf("Choose the right option.");
break;
}

return 0;

}