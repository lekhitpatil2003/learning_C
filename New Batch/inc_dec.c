#include<stdio.h>

int main(){
	int a;
	
	printf("Enter a Number : ");
	scanf("%d",&a); //20
	
	printf("Pre Increment = %d \n", ++a); //21
	printf("Post Increment = %d \n", a++); //21
	printf("After Post Increment = %d \n", a); //22
	
	printf("Pre Decrement = %d \n", --a); //21
	printf("Post Decrement = %d \n", a--); //21
	printf("After Post Decrement = %d \n", a); //20
	
	return 0;
}
