#include<stdio.h>

int main(){
	FILE *fp;
	char str[200];
	float marks;
	fp = fopen("C:\\filehandling\\studentdetail.txt","r");
	
	if(fp==NULL){
		printf("File does not exist or not opening");
		return 1;
	}
	printf("File Content : \n");
	while(fgets(str,sizeof(str),fp) != NULL){
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
