#include<stdio.h>

int main(){
	int num1,num2;
	//Take user Input
	
	printf("Enter First Number (num1) : \n");
	scanf("%d",&num1);
	
	printf("Enter Second Number (num2) : \n");
	scanf("%d",&num2);

	//Arithmatic Operation
	printf("Addition = %d \n", num1 + num2);
	printf("Subtraction = %d \n", num1 - num2);
	printf("Multiplication = %d \n", num1 * num2);
	printf("Division = %d \n", num1 / num2);		
	return 0;
}
