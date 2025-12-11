#include<stdio.h>

int main(){
	//Example 1
	int age;
	//take user input
	printf("Enter your Age : ");
	scanf("%d",&age);
	if(age>18){
		printf("You can Vote for Election");
	}
	printf("Process COmpleted");
	
	//Example 2
	int battery=15;
	if(battery<20){
		printf("Low Battery, please Charge!!!");
	}
	
	return 0;
}
