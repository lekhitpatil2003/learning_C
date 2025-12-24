#include<stdio.h>

int main(){
//	char fullname[20];
	
//	printf("Enter Your Name: ");
//	scanf("%s", name);
//	printf("Your Name is = %s",name);
	
//	printf("Enter Your Full Name : ");
//	fgets(fullname,sizeof(fullname),stdin);
//	printf("Your Full Name is = %s",fullname);
	
	//strlen
//	char name[] = "Lekhit Sanjay Patil";
//	printf("Length = %d",strlen(name));
//	
	//strcpy
//	char a[20] = "Hello";
//	char b[20];
//	strcpy(b,a);
//	printf("Copied String = %s",b);
	
	//strcat
//	char x[10] = "Lekhit";
//	char y[10] = "Patil";
//	strcat(x,y);
//	printf("\n%s",x);
	
//	char x[10] = "Lekhit";
//	char y[10] = "Sanjay";
//	char z[10] = "Patil";
//	strcat(x,y);
//	strcat(x,z);
//	printf("\n%s",x);

//	char s1[10] = "hello";
//	char s2[10] = "Hello";
//	if(strcasecmp(s1,s2) == 0){
//		printf("String are Equal");
//	}else{
//		printf("String are not equal");
//	}
	
	//print in upper case
//	char str[] = "Hello it's Lekhit";
//	strupr(str);
//	printf("%s\n",str);	
//	
	//print in lower case
//	strlwr(str);
//	printf("%s\n",str);
	
	//string print in rev
//	char str1[] = "programming";
//	strrev(str1);
//	printf("%s",str1);

	char str[] = "lekhit";
    int len;
    len = strlen(str);
    printf("First letter: %c\n", str[0]);
    printf("Last letter : %c\n", str[len - 1]);
	
	return 0;
}
