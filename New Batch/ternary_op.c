#include<stdio.h>

int main(){
	int num1,num2,max;
	
	//Take user Input
	printf("Enter First Number (num1) : \n");
	scanf("%d",&num1);
	
	printf("Enter Second Number (num2) : \n");
	scanf("%d",&num2);
	
	max = (num1 > num2) ? num1 : num2;
	printf("Maximum Number = %d \n", max);
	return 0;
}
