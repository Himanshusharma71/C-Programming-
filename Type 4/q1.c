#include <stdio.h>

void check_sign(int num) {
    if (num < 0) {
        printf("Negative ");
    } else if (num == 0) {
        printf("Zero ");
    } else {
        printf("Positive ");
    }
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    check_sign(num1);
    check_sign(num2);
    check_sign(num3);

    return 0;
}