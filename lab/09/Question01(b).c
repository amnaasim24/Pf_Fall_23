// Programmer: Amna Asim
// Date: 31st October, 2023
// Lab 9
// Question 1 [Recursions]
// Description: Write a function for finding factorial of any integer N using recursion.



#include<stdio.h>


 void lazybone(int n){
 //The base case
 if (n == 100){
 printf("100\n");
 }
 //Recursive case
 else {
 printf("%d, ",n);
 lazybone(n+1);//Recursive Call
 //Making the clone and asking it
 //to write from n+1 onwards
 }
 }

 int main(){
 lazybone(1);
 return 0;
 }
