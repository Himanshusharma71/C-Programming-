#include <stdio.h>

int main() {
    int id;
    int hours;
    float amountPerHour, salary;

    printf("Input the Employees ID: ");
    scanf("%d", &id);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &amountPerHour);

    salary = hours * amountPerHour;

    printf("Employees ID = %04d\n", id);
    printf("Salary = %.2f\n", salary);

    return 0;
}