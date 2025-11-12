#include<stdio.h>

int main(){
	int num1, num2; 
	char op;
	
	printf("Enter First Number :");
	scanf("%d",&num1);
	
	printf("Enter Second NUmber :");
	scanf("%d",&num2);
	
	printf("Which Operation have you Perform [+, -, *, /] :");
	scanf(" %c",&op);
	
	switch(op){
		case '+': printf("Addition = %d", num1+num2); break;
		case '-': printf("Subtraction = %d", num1-num2); break;
		case '*': printf("Multiplication = %d", num1*num2); break;
		case '/': printf("Division = %d", num1/num2); break;
		default: printf("Invalid Charactor")
	}
	return 0;
}
