#include <stdio.h>

int main() {
    int num1, num2;

    // Input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Determine the maximum number using switch case
    switch (num1 > num2) {
        case 1:
            printf("The maximum number is: %d\n", num1);
            break;
        case 0:
            switch (num1 < num2) {
                case 1:
                    printf("The maximum number is: %d\n", num2);
                    break;
                case 0:
                    printf("Both numbers are equal: %d\n", num1);
                    break;
            }
            break;
    }

    return 0;
}