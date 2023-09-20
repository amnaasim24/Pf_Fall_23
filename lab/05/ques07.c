//Programmer:Amna Asim
//Lab Task 05
//Question 7

#include<stdio.h>
void main()  {

	double saved=0.0, pay=0.0, discount=0.0, cost;
	
	printf("Please enter the cost:\t");
	scanf("%lf",&cost);
	if(cost>1999&&cost<2000){
		discount=0.5;
	}
		else if(cost>6000) {
			discount=0.5;
		}
		else if(cost>=2000&&cost<=4000){
			discount=0.2;
		}
		else if(cost>=4001&&cost<=6000){
			discount=0.3;
		}
	else {
		discount=0;
	}
	saved_amount=cost * discount;
	pay=cost - saved_amount;
	printf("Actual cost: %lf\n",cost);
	printf("Saved amount: %lf\n",saved);
	printf("The price after discount is: %lf\n",pay);

} //end main