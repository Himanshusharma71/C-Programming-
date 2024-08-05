#include <stdio.h>
void prime_factors(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        printf("%d ", n);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors: ");
    prime_factors(num);
    return 0;
}