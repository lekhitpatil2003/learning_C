#include<stdio.h>

int main(){
	int num1, num2;
	
	//Take user Input
	printf("Enter First Number (num1) : \n");
	scanf("%d",&num1);
	
	printf("Enter Second Number (num2) : \n");
	scanf("%d",&num2);
	
	//relational operation
	printf("num1 == num2 = %d \n", num1 == num2);
	printf("num1 != num2 = %d \n", num1 != num2);
	printf("num1 > num2 = %d \n", num1 > num2);
	printf("num1 < num2 = %d \n", num1 < num2);
	printf("num1 >= num2 = %d \n", num1 >= num2);
	printf("num1 <= num2 = %d \n", num1 <= num2);
	return 0;
}
