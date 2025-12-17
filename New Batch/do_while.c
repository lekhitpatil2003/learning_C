#include<stdio.h>

int main(){
	//Example 1
//	int choice;
//	do{
//		printf("\n 1.Hello \n 2.Bye \n 3.Exit \n--- Enter Your Choice\n");
//		scanf("%d",&choice);
//		
//		if(choice == 1){
//			printf("Hello \n");
//		} else if(choice == 2){
//			printf("Bye \n");
//		}
//	} while (choice != 3);

	//Example 2
//  int num, count = 0;
//	printf("Enter a Number : ");
//	scanf("%d",&num);
//  do {
//      count++;
//      num = num / 10;
//  } while (num > 0);
//
//  printf("Total count of this number is : %d\n", count);
	
	//Example 3
	int num, digit, sum=0;
	printf("Enter Number : %d");
	scanf("%d",&num);
	do{
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}while(num>0);
	printf("Total Sum : %d",sum);
	
	return 0;
}
