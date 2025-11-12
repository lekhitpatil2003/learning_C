#include<stdio.h>

int main(){
	int status, ready, payment;
	printf("Rsetrent is open ((1 = Yes, 0 = No)");
	scanf("%d",&status);
	
	if(status == 1){
		printf("In Restrent food is ready (1 = Yes, 0 = No)");
		scanf("%d",&ready);
	
		if(ready == 1){
			printf("Is payment Successful (1 = Yes, 0 = No)");
			scanf("%d",&payment);
			
			if(payment == 1){
				printf("Order Taken");
			}
			
			else{
				printf("Payment is not received");
			}
		}
		else{
			printf("Food is Not ready");
		}
	}else{
		printf("restrent is close");
	}
	return 0;
}

