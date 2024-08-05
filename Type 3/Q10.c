#include <stdio.h>

int main() {
    int num;

    /* Input a number from user */
    printf("Enter a number: ");
    scanf("%d", &num);

    /* Check if the number lies between 10 and 20 (inclusive) */
    if (num >= 10 && num <= 20) {
        printf("%d is within the range [10, 20].\n", num);
    } else {
        printf("%d is not within the range [10, 20].\n", num);
    }

    return 0;
}