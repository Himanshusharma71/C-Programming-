#include <stdio.h>

void check_even_odd(int num) {
    if (num % 2 == 0) {
        printf("Even ");
    } else {
        printf("Odd ");
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    check_even_odd(num1);
    check_even_odd(num2);

    return 0;
}