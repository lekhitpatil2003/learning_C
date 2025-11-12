#include<stdio.h>

int main(){
	int temp;
	printf("Enter Your Temperature:");
	scanf("%d",&temp);
	
	if(temp>=40){
		printf("Temperature is Very Hot");
	}
	
	else if(temp<40 && temp>=30){
		printf("Temperature is Hot");
	}
	
	else if(temp<30 && temp>=20){
		printf("Temperature is Modrate");
	}
	
	else if(temp<20 && temp>5){
		printf("Temperature is Cold");
	}
	
	else if(temp<5 && temp>0){
		printf("Very Cold");
	}
	
	else{
		printf("Enter Valid Temperature");
	}
}
