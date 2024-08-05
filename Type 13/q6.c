#include <stdio.h>

int main() {
    char str[100];
    int alphabetCount = 0, digitCount = 0, specialCharCount = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove newline character

    for (i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabetCount++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        } else {
            specialCharCount++;
        }
    }

    printf("Number of alphabets: %d\n", alphabetCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of special characters: %d\n", specialCharCount);

    return 0;
}