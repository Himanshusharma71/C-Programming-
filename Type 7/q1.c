#include <stdio.h>

int revNum(int num) {
    if (num == 0) {
        return 0;
    } else {
        int remainder = num % 10;
        printf("%d", remainder);
        revNum(num / 10);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is: ", num);
    revNum(num);
    printf("\n");

    return 0;
}