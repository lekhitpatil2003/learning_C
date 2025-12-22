#include<stdio.h>

int main(){
//	int marks[5] = {10,20,30,40,50};
//	int i;
//	printf("Array Elements");
//	for (i=0;i<5;i++){
//		printf("\n %d",marks[i]);
//	}
//	
//	marks[2] = 100;
//	printf("\nUpdated Array Elements");
//	for (i=0;i<5;i++){
//		printf("\n %d",marks[i]);
//	}
	
//	int marks[5];
//	int i;
//	printf("Enter 5 student Marks : ");
//	for(i=0;i<5;i++){
//		scanf("%d",&marks[i]);
//	}
//	printf("\n-------------------Students Marks---------------\n");
//	for(i=0;i<5;i++){
//		printf("marks[%d] = %d \n", i, marks[i]);
//	}
	
	
//	int arr[5] = {5,10,20,30,35};
//	int sum = 0, i;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	
//	printf("Sum is : %d",sum);
	
	
//	int arr[5] = {5,10,20,30,35};
//	int i;
//	printf("Array in Reverse Order : \n");
//	for(i=4;i>=0;i--){
//		printf("%d ",arr[i]);
//	}

	
//	int arr1[5] = {10,20,30,40,50,60};
//	int arr2[5];
//	int i;
//	for(i=0;i<5;i++){
//		arr2[i] = arr1[i];
//	}
//	printf("Copied Array : ");
//	for(i=0;i<5;i++){
//		printf("%d ", arr2[i]);
//	}

//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//	int even = 0, odd = 0;
//	int i;
//	for(i = 0; i < 9; i++) {
//        if(arr[i] % 2 == 0) {
//            even++;
//        } else {
//            odd++;
//        }
//    }
//    printf("Even numbers count = %d\n Odd numbers count  = %d", even, odd);
	
	
//	int arr[5] = {34,12,67,21,12};
//	int max = arr[0];
//	int i;
//	for(i = 1; i < 5; i++) {
//        if(arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    printf("Maximum number = %d", max);
    
    
    int arr[5] = {34,12,67,21,12};
	int min = arr[0];
	int i;
	for(i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum number = %d", min);
	
	
	
	
	return 0;
}
