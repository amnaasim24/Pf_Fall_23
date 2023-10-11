// Programmer: Amna Asim
// Lab 7
// Question 6
// Dsecription: Take an array with N elements as input, and then output the frequency of each element present in the array. Example:
// Input: {2, 4, 2, 3, 5, 5, 4, 4}
// Output:
// Frequency of 2 = 2
// Frequency of 4 = 3
// Frequency of 3 = 1
// Frequency of 5 = 2



#include<stdio.h>
int main() {   
	int n, arr[n], i, j;
	printf("\nPlease enter the size of your array:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("\nEnter element number %d: ",i);
		scanf("%d",&arr[i]);
	}
	    
	int frequency[n];
	for(i = 0; i < n; i++){    
		int count = 1;    
		for(j = i+1; j < n; j++) {    
			if(arr[i] == arr[j]) {    
				count++;    
				frequency[j] = -1;    
    		} 
        }    
        if(frequency[i] != -1)  
			frequency[i] = count;    
    }
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(i = 0; i <n; i++) {    
        if(frequency[i] != visited) {    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", frequency[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}
