#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0'; // remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0'; // remove newline character

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}