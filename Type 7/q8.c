#include <stdio.h>

int main() {
    int number, factorial = 1;
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not for negtive numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", number, factorial);
    }

    return 0;
}
