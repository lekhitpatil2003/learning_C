#include<stdio.h>

struct Student{
	int roll_no;
	char name[20];
	float marks;
};

int main(){
	int n,i;
	printf("Enter Nummber of Students : ");
	scanf("%d",&n);
	
	struct Student std[n];
	
	for(i=0;i<n;i++){
		printf("Enter details for student %d : \n",i+1);
		printf("Enter Your Roll no : ");
		scanf("%d",&std[i].roll_no);
		printf("Enter Your Name : ");
		scanf("%s",std[i].name);
		printf("Enter Your Marks : ");
		scanf("%f",&std[i].marks);
	}
	
	printf("**************** Student Records ****************\n");
	for(i=0;i<n;i++){
		printf("Roll No : %d | Name : %s | Marks = %.2f \n",std[i].roll_no,std[i].name,std[i].marks);
	}
	return 0;
}
