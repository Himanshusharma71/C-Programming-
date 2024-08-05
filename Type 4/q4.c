#include <stdio.h>

void check_case(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase ");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase ");
    } else {
        printf("Not an alphabet ");
    }
} 

int main() {
    char ch1, ch2;

    printf("Enter two characters: ");
    scanf(" %c %c", &ch1, &ch2);

    check_case(ch1);
    check_case(ch2);

    return 0;
}