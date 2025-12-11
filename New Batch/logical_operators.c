#include<stdio.h>

int main(){
	int num1, num2;
	
	//Take user Input
	printf("Enter First Number (num1) : ");
	scanf("%d",&num1);
	
	printf("Enter Second Number (num2) : ");
	scanf("%d",&num2);
	
	//logical operators
	//and
	printf("(num1 > num2) && (num1 > 0) = %d \n",(num1 > num2) && (num1 > 0));
	printf("(num1 > num2) && (num1 < 0) = %d \n",(num1 > num2) && (num1 < 0));
	
	//or
	printf("(num1 > num2) || (num1 > 0) = %d \n",(num1 > num2) || (num1 > 0));
	printf("(num1 > num2) || (num1 < 0) = %d \n",(num1 > num2) || (num1 < 0));
	
	//
	printf("!(num1==num2) = %d \n", !(num1==num2));
	return 0;
}
