#include<stdio.h>

int main(){
	//Interger Types
	int i = 10;
	short int si = 5566556;
	long int li = 120007;
	unsigned int ui = 20;
	
	//Character Types
	char c = 'A';
	
	//Floating-Points type
	float f = 3.14;
	double d = 3.1433233223;
	long double ld = 3.13423322333223;
	
	printf("------------- Interger Types -------------\n");
	printf("int : value = %d, size = %zu byte \n", i, sizeof(i));
	printf("short int : Value = %d, size = %zu byte \n", si, sizeof(si));
	printf("long int : Value = %ld, size = %zu byte \n", li, sizeof(li));
	printf("short int : Value = %u, size = %zu byte \n", ui, sizeof(ui));
	
	printf("\n------------- Character Types -------------\n");
	printf("char : value = %c, size = %zu byte \n",c,sizeof(c));
	
	printf("\n------------- Floating-Points type -------------\n");
	printf("float : value = %f, size = %zu byte \n",f,sizeof(f));
	printf("double : value = %lf, size = %zu byte \n",d,sizeof(d));
	printf("long double : value = %Lf, size = %zu byte \n",ld,sizeof(ld));
	return 0;
}
