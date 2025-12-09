#include<stdio.h>

int main(){
	int age;
	float marks;
	char grade;
	char name[20];
	
	//Taking User Input
	printf("Enter Your age : ");
	scanf("%d",&age);
	printf("Enter Your Marks : ");
	scanf("%f",&marks);
	printf("Enter Your Grade : ");
	scanf(" %c",&grade); //space before %c
	printf("Enter Your Name : ");
	scanf("%s", name);
	
	//display Output
	printf("----------- Student Details -----------\n");
	printf("Age is : %d \n",age);
	printf("Marks is : %.2f \n",marks);
	printf("Grade is : %c \n",grade);
	printf("Name is : %s \n",name);
	return 0;
}
