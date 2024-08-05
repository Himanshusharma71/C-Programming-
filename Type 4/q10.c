#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    char grade;

    printf("Enter marks of five subjects:\n");
    printf("Physics: ");
    scanf("%d", &physics);

    printf("Chemistry: ");
    scanf("%d", &chemistry);

    printf("Biology: ");
    scanf("%d", &biology);

    printf("Mathematics: ");
    scanf("%d", &mathematics);

    printf("Computer: ");
    scanf("%d", &computer);

    total = physics + chemistry + biology + mathematics + computer;
    percentage = total / 5.0;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Percentage = %.2f\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}