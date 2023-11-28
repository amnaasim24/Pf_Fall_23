// Programmer: Amna Asim
// Date: 14th November, 2023
// Lab 10
// Question 1



#include<stdio.h>
#include<string.h>
void print_array(void* arr, size_t size, size_t length)
{
 unsigned char* p = (unsigned char*)arr;
 for (size_t i = 0; i < length; i++)
  {
  	if (size == sizeof(int))
	{ 
		printf("%d", *(int*)p);
	} else if (size == sizeof(float)) {
	    printf("%f", *(float*)p);
    } else if (size == sizeof(double)) {
	    printf("%lf", *(double*)p);
    } else if (size == sizeof(char)) {
	    printf("%c", *p); 
	} else {
	    printf("Invalid data type size\n");
	    return;
    }
    p += size;
  } 
  printf("\n");
} 

int main() {
	int int_arr[] = {1, 2, 3, 4, 5}; 
	float float_arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double double_arr[] = {1.11, 2.22, 3.33, 4.44, 5.55};
	char char_arr[] = "Hello World!"; 
   
    print_array(int_arr, sizeof(int), 5);
    print_array(float_arr, sizeof(float), 5); 
	print_array(double_arr, sizeof(double), 5);
	print_array(char_arr, sizeof(char), strlen(char_arr));
	
	return 0;
	 
 }
