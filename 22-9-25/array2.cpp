#include<stdio.h>

int main(){
	int add[5];
	int i;
	printf("Enter Any 5 Numbers : ");
	for(i=0;i<5;i++){
		scanf("\n %d",&add[i]);
	}
	
	printf("Addition of Numbers is : ");
	for(i=0;i<5;i++){
		printf("add[0]+add[1]+add[2]+add[3]+add[4]",i,add[i]);
	}
	return 0;
}
