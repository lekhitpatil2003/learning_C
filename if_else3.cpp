#include<stdio.h>

int main(){
	int ticket, idproof, luggage;
	printf("Do you have a ticket? (1 = Yes, 0 = No)");
	scanf("%d",&ticket);
	
	if(ticket == 1){
		printf("Do You have a Id Proof? (1 = Yes, 0 = No)");
		scanf("%d",&idproof);
	
		if(idproof == 1){
			printf("Is Luggage Within 20 Kg? (1 = Yes, 0 = No)");
			scanf("%d",&luggage);
			
			if(luggage == 1){
				printf("Check in Succesfully");
			}
			
			else{
				printf("Extra Luggage charges apply");
			}
		}
		else{
			printf("Id Proof Required");
		}
	}else{
		printf("No ticket, No Entry");
	}
	return 0;
}

