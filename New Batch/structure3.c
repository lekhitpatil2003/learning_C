#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    char designation[30];
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n------ Employee Details ------\n");
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID          : %d\n", e[i].id);
        printf("Name        : %s\n", e[i].name);
        printf("Designation : %s\n", e[i].designation);
        printf("Salary      : %.2f\n", e[i].salary);
    }

    return 0;
}

