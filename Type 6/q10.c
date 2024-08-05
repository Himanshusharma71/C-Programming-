#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("The number of digits is: %d\n", count);

    return 0;
}