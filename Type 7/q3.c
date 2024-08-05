#include <stdio.h>

int main() {
    int digit;
    int i;
    
    printf("Enter an integer: ");
    scanf("%d", &digit);
    int array[10] = {0};
    while (digit > 0) {
        i = digit % 10; 
        array[i] = array[i] + 1; 
        digit = digit / 10; 
    }
    for (i = 0; i < 10; i++) {
        if (array[i] != 0) { 
            printf("Frequency of %d: %d\n", i, array[i]);
        }
    }

    return 0;
}
