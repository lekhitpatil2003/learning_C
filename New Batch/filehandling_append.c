// Appending to a file

#include<stdio.h>

int main(){
	FILE * fp;
	fp = fopen("C:\\filehandling\\filehandling_write1.txt","a");
	if(fp == NULL){
		printf("Error! file Dose not Exist ... \n");
		return 1;
	}
	fprintf(fp,"This is new line with appended at end \n");
	fprintf(fp,"This is 2nd new line with appended at end \n");
	fprintf(fp,"This is 3rd new line with appended at end \n");
	
	fclose(fp);
	printf("Data Appenden Successfully !!!");	
	
	return 0;
}
