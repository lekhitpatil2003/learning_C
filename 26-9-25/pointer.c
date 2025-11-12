// A pointer is a variable that holds the address of the variable
#include<stdio.h>

int main(){
	/*int x = 10, y, z;
	printf("\n Address of x = %u",&x);  //6487628
	printf("\n Address of y = %u",&y);  //6487624
	printf("\n Address of z = %u",&z);  //6487620
	printf("\n Value of x = %d",*(&x)); //10 */
	
	int x = 15;
	int *pr;
	pr = &x;
	
	printf("\n Address of x = %u",&x);
	printf("\n Address of pr = %u",pr);
	
	printf("\n Value of x = %d",x);
	printf("\n Value of pr = %d",*pr);
	
	*pr = 20;
	printf("\n Value of pr = %d",x);
	return 0;
}
