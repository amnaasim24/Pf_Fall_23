// Progrmmer: Amna Asim
// LAB 06
// Question 9

#include<stdio.h> 
int main() { //start of main
    
    //declaration
    
    int count, arr[5];
    
    //asking user to input elements in array

    printf("enter elements:\n "); 

    //start of for loop

    for ( count = 0 ; count < 5 ; count++) { 

        //reading the value of elements

        scanf("%d",&arr[count]); 

        //new line

        printf("\n");
                 
    } //end of loop

      //initializing 
    
     int max=arr[0], min=arr[0];
     
     //start of another loop
     
     for( count = 0 ; count < 5; count++ ) {
         
         //checking if initialized value to min and max is greater or lesser than the elements
         
         if( arr[count] > max) {            
         max = arr[count];
         }     
         if(arr[count] < min) {
             min = arr[count];
         }
     }
    printf( "the max value is: %d\n", max );
    printf( "the min value is: %d", min );
    return 0;
} //end main
