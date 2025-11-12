#include<stdio.h>
#include<string.h>

void main(){
	//char name1[20];
	//char name2[20];
	//printf("Enter your full name : ");
	//gets(name1);
	//strcpy(name2,name1);
	
	//printf("Name 1 = %s \n",name1);
	//printf("Name 2 = %s \n",name2);
	
	//printf("Length is %d",strlen(name));
	
	char s1[10] = "Anand";
	char s2[10] = "AnanD";
	if(strcmp(s1,s2) == 0)
		printf("String are Equal \n");
		else
		printf("String are not Equal \n");
		
	if(strcasecmp(s1,s2) == 0)
		printf("String are Equal \n");
		else
		printf("String are not Equal \n");
}
