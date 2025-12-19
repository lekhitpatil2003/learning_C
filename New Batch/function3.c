//function without parameter but with return value
#include<stdio.h>

int getnumber(){
	return 10;
}
int main(){
	int x = getnumber();
	printf("Number = %d", x);
	
	return 0;
}
