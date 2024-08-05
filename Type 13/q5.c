#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove newline character

    printf("Original string: %s\n", str);

    strupr(str);

    printf("String in uppercase: %s\n", str);

    return 0;
}