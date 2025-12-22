#include<stdio.h>

int main(){
//	int arr[2][3] = {
//        {1, 2, 3},
//        {4, 5, 6}
//    };
//    int i, j;
//    for(i = 0; i < 2; i++) {       // Rows
//        for(j = 0; j < 3; j++) {   // Columns
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
    
//    int arr[2][2];
//    int i, j;
//    printf("Enter 4 numbers : \n");
//    for(i = 0; i < 2; i++) {       // Rows
//        for(j = 0; j < 2; j++) {   // Columns
//            scanf("%d",&arr[i][j]);
//    	}
//    }
//    printf("You Entered Elements : \n");
//	for(i = 0; i < 2; i++) {       // Rows
//        for(j = 0; j < 2; j++) {   // Columns
//            printf("%d ",arr[i][j]);
//    	}
//    	printf("\n");
//    }

//	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	int i;
//	printf("Primary Diagonal Elements : \n");
//	for(i=0;i<3;i++){
//		printf("%d ",arr[i][i]);
//	}
	
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i;
	printf("Primary Diagonal Elements : \n");
	for(i=0;i<3;i++){
		printf("%d ",arr[i][2-i]);
	}
	
	
	return 0;
}
