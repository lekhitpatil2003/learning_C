#include<stdio.h>

void main(){
	char name[20];
	printf("Enter your full name : ");
	//scanf("%s",&name);
	gets(name);
	printf("My name is = %s",name);
	return 0;
}
