#include <stdio.h>

int main() {
    int num,revNum = 0, remain, original;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        remain = num % 10;
       revNum =revNum * 10 + remain;
        num /= 10;
    }
    if (original ==revNum) {
        printf("%d is a palindrome\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
