#include<stdio.h>

int main(){
	int age;
	float marks;
	char grade;
	char name[20];
	
	printf("Enter Your age : ");
	scanf("%d",&age);
	printf("Enter Your Marks : ");
	scanf("%f",&marks);
	printf("Enter Your Grade : ");
	scanf(" %c",&grade);
	printf("Enter Your Name : ");
	scanf("%s", name);
	
	//display Output
	printf("----------- Student Details -----------");
	printf("Age is : %d \n",age);
	printf("Marks is : %f \n",marks);
	printf("Grade is : %c \n",grade);
	printf("Name is : %s \n",name);
	return 0;
}
