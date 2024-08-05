#include <stdio.h>

int main() {
    char ch;

    /* Input character from user */
    printf("Enter a character: ");
    scanf(" %c", &ch);

    /* Check if the character is an alphabet using conditional operator */
    printf("%c is %s an alphabet.\n", ch, ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))? "" : "not");

    return 0;
}