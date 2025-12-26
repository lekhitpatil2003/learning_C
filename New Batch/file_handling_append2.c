// user input write (append mode)

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    float marks;

    fp = fopen("C:\\filehandling\\user_ip_filehandling_write.txt", "a");
    if (fp == NULL) {
        printf("Error! File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("Enter Student Name : ");
    scanf("%s", name);

    printf("Enter Age : ");
    scanf("%d", &age);

    printf("Enter Student Marks : ");
    scanf("%f", &marks);

    fprintf(fp, "-------------------------\n");
    fprintf(fp, "Name  : %s\nAge   : %d\nMarks : %.2f\n", name, age, marks);

    fclose(fp);
    printf("Data Appended Successfully\n");

    return 0;
}

