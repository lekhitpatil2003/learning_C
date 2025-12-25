#include<stdio.h>

struct Employee{
	int id_no;
	char name[20];
	char designation[20];
	int salary;
};
int main(){
	struct Employee emp;
	
	printf("Enter Employee ID: ");
	scanf("%d", &emp.id_no);
	
	printf("Enter Name : ");
	scanf("%s", &emp.name);
	
	printf("Enter Designation : ");
	scanf("%s", &emp.designation);
	
	printf("Enter Salary : ");
	scanf("%d", &emp.salary);
	
	printf("----- Details of Employee -----");
	printf("Employee Id = %d\n Employee Name = %s\n Employee Designation = %s\n Employee Salary = %d\n",emp.id_no,emp.name,emp.designation,emp.salary);
	
	return 0;
}
