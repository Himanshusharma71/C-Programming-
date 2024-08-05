#include <stdio.h>

int main() {
    char c = 'a';
    printf("Alphabets from a to z are:\n");
    while (c <= 'z') {
        printf("%c\n", c);
        c++;
    }

    return 0;
}