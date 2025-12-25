#include<stdio.h>

struct employeeS{
	int id_no; //4 byte
	char name[10]; //10 byte
	char designation[10]; //10 byte
	int salary; //4 byte
};

union employeeU{
	int id_no; //4 byte
	char name[10]; //10 byte
	char designation[10]; //10 byte
	int salary; //4 byte
};

int main(){
	struct employeeS e1;
	printf("Size of Struct = %d\n", sizeof(e1));
	
	union employeeU u1;
	printf("Size of Union = %d", sizeof(u1));
	
	return 0;
}
