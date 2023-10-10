// Programmer: Amna Asim
// Lab 6
// Question 3


#include<stdio.h>
int main() {
	
	int x, y, GCF, LCM, ans, ans1;
	printf("Enter two numbers to compute their Greatest Comon Divisor and Least Common Multiple:");
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>y) {
		GCF=y;
	}
	else {
		GCF=x;
	}
	while(GCF>0) {
		if(x%GCF==0) {
			if(y%GCF==0) {
				ans=GCF;
				printf("\nThe greatest common divisor of %d and %d is %d ",x,y,ans);
				break;	
			}
		}
		GCF--;
	}
	while(1) {
		if(LCM%x==0&&LCM%y==0) {
			printf("\nLeast Common Multiple is:%d",LCM);
			break;
		}
		LCM++;
	}
return 0;	
}//end main