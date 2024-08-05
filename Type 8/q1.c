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
    printf("First digit: %d\n", f);
    printf("Last digit: %d", l);

    return 0;
}
