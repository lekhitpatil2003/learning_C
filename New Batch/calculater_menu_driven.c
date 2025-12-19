#include<stdio.h>

int main(){
    int a, b, choice;
    char cont;

    do{
        printf("\n=========== Calculator Menu ===========\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("0. Exit\n\n");

        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        if(choice != 0 && choice <=4){
            printf("Enter First Number : ");
            scanf("%d",&a);

            printf("Enter Second Number : ");
            scanf("%d",&b);
        }

        switch(choice){
            case 1:
                printf("Addition = %d", a+b);
                break;

            case 2:
                printf("Subtraction = %d", a-b);
                break;

            case 3:
                printf("Multiplication = %d", a*b);
                break;

            case 4:
                if(b == 0)
                    printf("Cannot divide by zero");
                else
                    printf("Division = %d", a/b);
                break;

            case 0:
                printf("Exiting Calculator...");
                break;

            default:
                printf("Invalid Choice");
        }

        if(choice != 0){
            printf("\nDo you want to perform another operation (Y / N): ");
            scanf(" %c",&cont);
        } else {
            cont = 'n';
        }

    }while(cont == 'y' || cont == 'Y');

    return 0;
}
