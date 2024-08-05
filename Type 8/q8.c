#include <stdio.h>
#include <stdbool.h>
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, sum = 0;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    printf("Sum of all prime numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
