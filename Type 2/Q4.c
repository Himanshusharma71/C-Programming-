/**
 * C program to print characters in reverse order
 */

#include <stdio.h>

int main() {
    char str[] = "HIMANSHU";
    int length, i;


    length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("The reverse of %s is ", str);
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}