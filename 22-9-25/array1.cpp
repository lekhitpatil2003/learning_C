#include<stdio.h>

int main(){
	int marks[5];
	int i;
	printf("Enter 5 Subject Marks : ");
	for(i=0;i<5;i++){
		scanf("\n %d",&marks[i]);
	}
	
	printf("Updated Array List");
	for(i=0;i<5;i++){
		printf("\n marks[%d] = %d \n",i,marks[i]);
	}
	return 0;
}
