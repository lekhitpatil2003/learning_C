#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\filehandling\\write1.txt","a");
	
	if(fp==NULL){
		printf("file doesenot exist or not opening");
		return 1;
	}
	fprintf(fp,"Hello this is yogeshwar \n");
	fprintf(fp,"Hello this is Nana \n");
	
	fclose(fp);
	printf("Data written Successfully");
	return 0;
}
