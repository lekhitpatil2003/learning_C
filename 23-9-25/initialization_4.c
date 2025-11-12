#include<stdio.h>
#include<string.h>

void main(){
	/*char password[20],input[20];
	strcpy(password,"admin123");
	
	printf("Enter Password : ");
	scanf("%s",&input);
	
	if(strcmp(password,input) == 0)
		printf("Access Granted \n");
		else
		printf("Access Denied \n");*/
		
	/*char name1[20] = "Anand ";
	char name2[20] = "Ogale, ";
	char str[20] = "I am from Nashik";
	
	strcat(name1,name2);
	strcat(name1,str);
	
	printf("Concatenated String = %s",name1);*/
	
	char str[50];
	printf("Enter String");
	//gets(str); //unsafe
	fgets(str,sizeOf(str),stdin); //safe
	displaystring(str);
}

void displaystring(char str[]){
	printf("Entered String" );
	puts(str);
}
