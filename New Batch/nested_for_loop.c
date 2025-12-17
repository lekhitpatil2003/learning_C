#include<stdio.h>

int main(){
	int i, j, num=1;
	
	printf("1.\n");
	
	for(i=1 ; i<=3 ; i++){
		for(j=1 ; j<=5 ; j++){
			printf("* ");
		}
		printf("\n");
	}

	printf("\n2.\n\n");
	
	for(i=1 ; i<=5 ; i++){
		for(j=1 ; j<=i ; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n3.\n\n");
	
	for(i=1 ; i<=5 ; i++){
		for(j=1 ; j<=i ; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	printf("\n4.\n\n");
	
	for(i=1 ; i<=3 ; i++){
		for(j=1 ; j<=3 ; j++){
			printf("%d ",i * j);
		}
		printf("\n");
	}
	
	printf("\n5.\n\n");
	
	for(i=5 ; i>=1 ; i--){
		for(j=1 ; j<=i ; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n6.\n\n");
	
	for(i=1 ; i<=5 ; i++){
		for(j=1 ; j<=i ; j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	
	printf("\n7.\n\n");
	
	for(i=1 ; i<=4 ; i++){
		for(j=1 ; j<=i ; j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	
	return 0;
}
