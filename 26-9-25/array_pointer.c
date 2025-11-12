#include<stdio.h>

int main(){
	int arr[5] = {10,20,30,40,50};
	int *p;
	int i;
	
	p = arr;
	
	for(i=0;i<5;i++){
		printf("Elements %d = %d \n",i,*(p+i)); //arr[0]
	}
	
	
	/*printf("First Element + %d", *p); //arr[0]
	
	printf("\n2nd Element + %d", *(p+1)); //arr[1] */	
	return 0;
}
