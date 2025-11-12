#include<stdio.h>

int main(){
	int age;
	printf("Enter Your Age:");
	scanf("%d",&age);
	
	if(age<=5){
		printf("Ticket Free - Enjoy");
	}
	
	else if(age>5 && age<12){
		printf("Half Ticket");
	}
	
	else if(age>5 && age<60){
		printf("Full Ticket");
	}
	
	else if(age>60 && age<75){
		printf("Senior Citizen");
	}
	else{
		printf("Free");
	}
}
