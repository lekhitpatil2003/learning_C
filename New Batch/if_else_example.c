#include<stdio.h>

int main(){
	//Example 1
//	int balance, widthraw;
//	
//	printf("Enter your Balance : ");
//	scanf("%d",&balance);
//	
//	printf("Enter Widthraw Amount : ");
//	scanf("%d",&widthraw);
//	
//	if(widthraw<=balance){
//		printf("Your Remaining Amount is = %d \n",balance-widthraw);
//		printf("Process Completed");
//	}
//	else{
//		printf("Insufficient Balance, Widthraw not possible  ");
//	}

	// Example 2
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	
	if(marks>35 && marks<=50){
		printf("C grade");
	}
	else if(marks>=51 && marks < 70){
		printf("B grade");
	}
	else if(marks>=71 && marks < 100){
		printf("A grade");
	}
	else{
		printf("You are fail");
	}

	return 0;
}
