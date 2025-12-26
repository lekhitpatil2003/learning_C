#include<stdio.h>

int main(){
	FILE * fp;
	int numbers[5];
	
	fp = fopen("C:\\filehandling\\numbers1.bin","rb");
	if(fp == NULL) {
        printf("Error opening file...\n");
        return 1;
    }
    fread(numbers,sizeof(int), 5,fp);
    fclose(fp);
    int i;
    for(i=0; i<5; i++){
    	printf("%d ", numbers[i]);
	}
	printf("\n");
	return 0;
}
