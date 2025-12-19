//function without parameter and without return
#include<stdio.h>

void msg(){
	printf("Hello, Welcome to c programming... \n");
}

void printstar(){
	printf("**********************************\n");
}

void todaymenu(){
	printf("1. Pizza\n");
	printf("2. Burger\n");
	printf("3. Sandwich\n");
}

void tomomenu(){
	printf("1. Ukdiche Modak\n");
	printf("2. Fish\n");
	printf("3. Dosa\n");
}

int main(){
	printstar();
	todaymenu();
	printstar();
	
	printstar();
	tomomenu();
	printstar();
	
	return 0;
}
