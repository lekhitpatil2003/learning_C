// reading user input file

#include<stdio.h>

int main(){
	FILE *fp;
	char name[50];
	int age;
	float marks;
	
	fp = fopen("C:\\filehandling\\user_ip_filehandling_write.txt","r");
	
	if(fp == NULL){
		printf("Error! file Dose not Exist ... \n");
		return 1;
	}
	
	while (fscanf(fp,"-------------------------\nName  : %s\nAge   : %d\nMarks : %f\n",name, &age, &marks) != NULL){
        printf("Name   : %s\n", name);
        printf("Age    : %d\n", age);
        printf("Marks  : %f\n", marks);
        printf("-------------------------\n");
    }
    
	fclose(fp);
	
	return 0;	
}
