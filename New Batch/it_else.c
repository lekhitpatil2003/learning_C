#include<stdio.h>

int main(){
	int amount;
	printf("Enter your food order Amount : ");
	scanf("%d",&amount);
	
	if(amount>500){
		printf("Congatulations You get Free Delivery");
	}
	else{
		printf("Delivery Charges Will be Applied");
	}
	
	return 0;
}
