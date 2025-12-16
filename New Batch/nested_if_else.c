#include<stdio.h>

int main(){
	int ticket, idProof, lugguage;
	
	printf("Dou You have a ticket (1-Yes, 0-No) : ");
	scanf("%d", &ticket);
	if(ticket==1){
		printf("Dou You have a ID Proof (1-Yes, 0-No) : ");
		scanf("%d", &idProof);
		
		if(idProof==1){
			printf("Is Lugguage Within 15Kg (1-Yes, 0-No) : ");
			scanf("%d", &lugguage);
			
			if(lugguage==1){
				printf("Check in Successfully");
			}
			else{
				printf("Extra Lugguage Apply");
			}	
		}
		else{
			printf("ID Proof is Required");
		}
	}
	else{
		printf("No Ticket, NO Entry");
	}
	
	printf("\n\n\nProcess Completed\n");
	return 0;
}
