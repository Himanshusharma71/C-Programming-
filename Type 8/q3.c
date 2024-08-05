#include <stdio.h>

int main() {
    int num, f, l,temp;
    printf("Enter a num: ");
    scanf("%d", &num);
    l = num % 10;
    f = num;
    while(f >= 10) {
        f /= 10;
    }
    temp = f;
    f = l;
    l = temp;
    printf("First digit: %d\n", f);
    printf("Last digit: %d", l);

    return 0;
}
