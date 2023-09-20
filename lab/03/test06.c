#include<stdio.h>
#include<math.h>
int main() {

	int x1,x2,y1,y2,dx,dy;
     
	float D=0.0;

	printf("Please enter the value of x1:\t"); 
	scanf("%d",&x1);
	printf("Please enter the value of x2:\t");
	scanf("%d",&x2);
	printf("Please enter the value of y1:\t");
	scanf("%d",&y1);
	printf("Please enter the value of y2:\t");
	scanf("%d",&y2);
	dx=x2-x1;
	dy=y2-y1;
	D=sqrt((dx*dx)+(dy*dy));
	printf("(x1,y1)=(%d,%d)\n",x1,x2);
	printf("(x2,y2)=(%d,%d)\n",y1,y2);
	printf("The distance between given coordinates is:\t%f ",D);

	return 0;

}