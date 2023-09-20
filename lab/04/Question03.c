#include<stdio.h>

int main() {

	int n, sum=0, i=1, arr[6]={0}, in;

	printf("enter the value of n:\t");
	scanf("%d",&n);
	while(i<n) {
		printf("input in:\t");
		arr[i]=in;
		sum=sum+arr[i];
		i=i+1;
	}
	printf("The sum is:%d",sum);
	
return sum;

}  