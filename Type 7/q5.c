#include <stdio.h>

int main() {
    printf("ASCII Table:\n");
    printf("Character\tDecimal\n");
    printf("-----------------------\n");
    for(int i = 0; i <= 127; i++) {
        printf("%c\t\t%d\n", i, i);
    }

    return 0;
}
