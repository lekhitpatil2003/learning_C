//function with parameter but no returns
#include<stdio.h>
int i;
void printTable(int num){
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", num, i, num * i);
	}
}

int main(){
	int number;
	printf("Enter Number : ");
	scanf("%d",&number);
	
	printf("Multiplication Table of %d : \n", number);
	printTable(number);
	
	return 0;
}
