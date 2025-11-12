#include<stdio.h>

struct EmployeeS{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};

struct EmployeeU{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};

int main(){
	struct EmployeeS e1;
	printf("Size of struct : %d \n",sizeof(e1));
	
	struct EmployeeU e2;
	printf("Size of Union : %d \n",sizeof(e2));
	
	int a;
	char b;
	printf("size of int = %d \nsize of Char = %d",sizeof(a),sizeof(b));
	
	return 0;	
}
