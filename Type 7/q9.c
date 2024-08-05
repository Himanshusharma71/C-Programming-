#include <stdio.h>

int main() {
    int num1, num2, gcd = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // assign the current value of i to gcd
        }
    }

    printf("GCD: %d\n", gcd);

    return 0;
}