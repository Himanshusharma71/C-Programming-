#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            if(marks < 0 || marks > 100) {
                printf("Error: Invalid marks.\n");
            } else {
                printf("Grade: F\n");
            }
    }

    return 0;
}