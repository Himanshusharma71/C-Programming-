#include <stdio.h>

int main() {
    int i = 1;

    printf("Odd numbers between 1 to 100 are:\n");
    while (i <= 100) {
        if (i % 2!= 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}