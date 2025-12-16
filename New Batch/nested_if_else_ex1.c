#include<stdio.h>

int main(){
	int restaurantOpen, foodAvailable, Payment;
	
	printf("Is Reastuarnt Open (1-Yes, 0-No) : ");
	scanf("%d", &restaurantOpen);
	
	if(restaurantOpen==1){
		printf("Is Your food Available (1-Yes, 0-No) : ");
		scanf("%d", &foodAvailable);
		if(foodAvailable==1){
			printf("Payment Successful Status? (1-Yes, 0-No) : ");
			scanf("%d", &Payment);
			if(Payment==1){
				printf("Order Confirmed");
			}else{
				printf("Payment Fails");
			}
		}else{
			printf("Food is Not Available");
		}
	}else{
		printf("Restaurant is Close");
	}
	
	printf("\n\nProcess Completed\n");
	
	return 0;
}
