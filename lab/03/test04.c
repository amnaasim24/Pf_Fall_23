#include<stdio.h>
int main() {

	int d1=10, d2=10, d3=5, d4=15, T_Dist=0, consumedFuel=0, fuelPERdistance=2;
    
	T_Dist=10+10+5+15;
    
	printf("the total distance that bus has covered is: %d\n",T_Dist);
    
	consumedFuel=fuelPERdistance*T_Dist;
    
	printf("the consumed fuel is: %d",consumedFuel);
    

	return 0;

}