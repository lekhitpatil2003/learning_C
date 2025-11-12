#include<stdio.h>

struct Employee{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};

int main(){
	struct Employee emp;
	printf("Enter Emp id : ");
	scanf("%d",&emp.id);
	printf("Enter Employee Name : ");
	scanf("%s",emp.name);
	printf("Enter Desgination : \n");
	scanf("%s",emp.desgination);
	printf("Enter Employee Salary : ");
	scanf("%d",&emp.salary);
	
	printf("---------------Details of Employee-----------------\n");
	printf("Employee id = %d \n",emp.id);
	printf("Employee Name = %s \n",emp.name);
	printf("Employee Desgination = %s \n",emp.desgination);
	printf("Employee Salary = %d \n",emp.salary);
}
