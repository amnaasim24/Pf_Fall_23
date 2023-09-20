#include<stdio.h>

int main() { 
     
	float sale_per=20.0, originalprice=1500.0, calc=0, saleprice=0; 

	calc=originalprice*(sale_per/100); 
	saleprice=originalprice-calc; 
	printf("the sale price is:\t%f",saleprice);
   
return 0;

} //end main