//Programmer:Amna Asim
//Lab Task 05
//Question 08

#include<stdio.h>
int main() {

	int light_sensor;

	printf("pLEASE enter the vaue to light sensor between 0-1000\n");
	scanf("%d",&light_sensor);
	if(lightsensor>500) {
		printf("Sunshine exposed");
	}
		else if(light_sensor>=0 && light_sensor<=100) {
    			printf("It is evening\n");
		}
		else if(light_sensor>100 && light_sensor<=500) {
			printf("It is lightining\n");
		}
	else {
		printf("Please input an appropriate value\n");
	}

return 0;

} //end main
     