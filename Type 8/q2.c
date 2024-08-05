#include <stdio.h>

int main() {
    int num, f, l;
    printf("Enter a num: ");
    scanf("%d", &num);
    l = num % 10;
    f = num;
    while(f >= 10) {
        f /= 10;
    }
    int sum=f+l;
    printf("First digit: %d\n", f);
    printf("Last digit: %d\n", l);
    printf("Sum of first and last digit: %d", sum);

    return 0;
}
