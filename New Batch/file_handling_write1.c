// writing to file

#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\filehandling\\filehandling_write1.txt","w");
	if(fp == NULL){
		printf("Error! file Dose not Exist ... \n");
		return 1;
	}
	fprintf(fp,"Hello, Its File Handling Example\n");
	fprintf(fp,"Hello, Its File Handling Example this is 2nd line");
	fclose(fp);
	printf("Data Written Successfully");
	
	return 0;	
}
