#include<stdio.h>


int main(){
	
	FILE *fp;
	
	fp = fopen("C:\\filehandling\\write1.txt","w");
	
	if(fp==NULL){
		printf("File doesenot exist or not opening");
		return 1;
	}
	fprintf(fp,"Hello this is Lekhit \n");
	fprintf(fp,"Hello this is nakul \n");
	
	fclose(fp);
	printf("Data Written Successfully");
	return 0;
}
