#include<stdio.h>

int main(){
	FILE *fp;
	int numbers[6] = {10,20,30,40,50,60};
	
	fp = fopen("C:\\filehandling\\hacker.bin","wb");
	
	if(fp==NULL){
		printf("File doesenot exist or not opening");
		return 1;
	}
	fwrite(numbers,sizeof(int),5,fp);
	fclose(fp);
	printf("Bunary Data written Successfully");
	return 0;
}
