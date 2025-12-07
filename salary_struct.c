#include <stdio.h>

#define EMP_COUNT 100   
struct Employee {
    char name[50];
    float basic_pay;
    float da;
    float gross_salary;
};

int main() {
    struct Employee emp[EMP_COUNT];
    int i, n;

    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basic_pay);

        emp[i].da = 0.52 * emp[i].basic_pay;
        emp[i].gross_salary = emp[i].basic_pay + emp[i].da;
    }

    printf("\n---------------------------------------------\n");
    printf("Employee Name\t\tGross Salary\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-15s\t%.2f\n", emp[i].name, emp[i].gross_salary);
    }

    return 0;
}
