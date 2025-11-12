//pointer to pointer
#include<stdio.h>

int main(){
	int a = 10; //normal variable
	int *p; //pointer to int
	int **pp; //pointer to pointer
	
	p = &a;
	pp = &p;
	
	printf("\n Value of a = %d",a); //output = 10
	printf("\n Address of a = %u",&a);
	printf("\n p Stores = %u (Address of a)",p);
	printf("\n *p (value at p) = %d",*p);

	printf("\n pp Stores = %u (Address of p)",pp);
	printf("\n *pp (value at pp) = %u (Address of a)",*pp);
		
	return 0;
}
