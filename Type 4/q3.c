#include <stdio.h>

void check_character(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Alphabet ");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit ");
    } else {
        printf("Special character ");
    }
}

int main() {
    char ch1, ch2, ch3, ch4;

    printf("Enter four characters: ");
    scanf(" %c %c %c %c", &ch1, &ch2, &ch3, &ch4);

    check_character(ch1);
    check_character(ch2);
    check_character(ch3);
    check_character(ch4);

    return 0;
}