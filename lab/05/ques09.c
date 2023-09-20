//Programmer:Amna Asim
//Lab Task 05
//Question 09

#include<stdio.h>
#include<math.h>
int main() {

	int a, b, c, discriminant=0;
	float s1, s2;

	printf("Please enter the value to a:\t\n");
	scanf("%d", &a);
	printf("Please enter the value to b:\t\n");
	scanf("%d", &b);
	printf("Please enter the value to c:\t\n");
	scanf("%d", &c);
	discriminant=(b*b) - (4*a*c);
	if(discriminant>0) {
		s1=(-b+(sqrt(discriminant)))/(2*a);
		s2=(-b-(sqrt(discriminant)))/(2*a);
	}
		else if( discriminant<0) {
			printf("Imaginary");
		}
		else if(discriminant=0) {
			s1=(-b)/(2*a);
		}
	else {
		printf("Null");
	}
	printf("s1:\t%f\n s2:\t%f\n", s1, s2);

return 0;

} //end main