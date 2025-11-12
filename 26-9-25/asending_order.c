#include<stdio.h>

int main(){
	int arr[5] = {54,12,45,10,32};
	int temp,i,j;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted Array \n");
	for(i=0;i<5;i++){
		printf("%d \n",arr[i]);
	}
}
