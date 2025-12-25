//a structure is a user define data type - allow you to store multiple variables od different datatypes underone name

//Syntax
/*
struct structure_name{
	data_type member1;
	data_type member2;
	data_type member3;
}
*/

#include<stdio.h>
struct Student{
	int roll;
	float marks;
	char grade;
};

int main(){
	struct Student s1;
	struct Student s2;
	struct Student s3;
	
	s1.roll = 101;
	s1.marks = 69.46;
	s1.grade = 'A';
	
	s2.roll = 102;
	s2.marks = 54.35;
	s2.grade = 'B';
	
	s3.roll = 103;
	s3.marks = 34.68;
	s3.grade = 'F';
	
	printf("----------- Student 1 -----------\n");
	printf("Roll No : %d\n", s1.roll);
	printf("Marks : %.2f\n", s1.marks);
	printf("Grade : %c\n", s1.grade);
	
	printf("----------- Student 2 -----------\n");
	printf("Roll No : %d\n", s2.roll);
	printf("Marks : %.2f\n", s2.marks);
	printf("Grade : %c\n", s2.grade);
	
	printf("----------- Student 3 -----------\n");
	printf("Roll No : %d\n", s3.roll);
	printf("Marks : %.2f\n", s3.marks);
	printf("Grade : %c\n", s3.grade);
		
	return 0;
}
