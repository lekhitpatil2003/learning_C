#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int i = -25;
	double x = 81.9, y = 2.3, z = 7.8, angle = 0.0;
	printf("Squart (%.0f) = %.2f \n",x,sqrt(x));
	
	printf("Power (2, 3) = %.2f \n", pow(2, 3));
	
	printf("abs(%d) = %d \n",abs(i));
	
	printf("Ceil(%.2f) = %.2f \n", y, ceil(y));
	
	printf("ceil (%.2f) = %.2f \n",z,floor(z));
	
	printf("sin(0) = %.2f \n",sin(angle));
	printf("cos(0) = %.2f \n",cos(angle));
	printf("tan(0) = %.2f \n",tan(angle));
	
	return 0;
}
