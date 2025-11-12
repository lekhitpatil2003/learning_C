#include<stdio.h>

int main(){
	FILE *fp;
	char name[50];
	int age;
	float marks;
	
	fp = fopen("C:\\filehandling\\studentdetail.txt","w");
	
	if(fp==NULL){
		printf("File doesenot exist or not opening");
		return 1;
	}
	
	printf("Enter Student Name : ",name);
	fgets(name, sizeof(name), stdin);
	
	printf("Enter Your Age : ",age);
	scanf("%d", &age);
	
	printf("Enter Your Marks : ");
	scanf("%.f", &marks);
	
	fprintf(fp, "Name : %sAge : %d\nMarks : %.f\n",name,age,marks);
	
	fclose(fp);
	printf("Data Written Successfully");
	return 0;
}
