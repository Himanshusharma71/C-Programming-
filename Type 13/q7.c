#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowelCount = 0, consonantCount = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove newline character

    for (i = 0; str[i]; i++) {
        char c = tolower(str[i]); // convert to lowercase for simplicity

        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}