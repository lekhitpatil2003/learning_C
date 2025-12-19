//with parameter with return
#include<stdio.h>

int square(int num){
	return num*num;	
}

int max(int a, int b){
	if(a>b){
		return a;
	} else{
		return b;
	}
}

int main(){
//	int result = square(6);
//	printf("Square = %d \n", result);
	
	int result = max(145,235);
	printf("Maximum Number is : %d \n",result);
	return 0;
}
