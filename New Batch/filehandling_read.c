// reading to file

#include<stdio.h>

int main(){
	FILE *fp;
	
	char str[200];
	fp = fopen("C:\\filehandling\\filehandling_write1.txt","r");
	
	if(fp == NULL){
		printf("Error! file Dose not Exist ... \n");
		return 1;
	}
	
	printf("File Content\n\n");
	while(fgets(str,sizeof(str),fp) != NULL){
		printf("%s",str);
	}
	fclose(fp);
	
	return 0;	
}
