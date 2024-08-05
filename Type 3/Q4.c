#include <stdio.h>

int main() {
    int year;

    /* Input year from user */
    printf("Enter a year: ");
    scanf("%d", &year);

    /* Check if the year is a leap year using conditional operator */
    printf("%d is %s a leap year.\n", year, ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0)? "" : "not");

    return 0;
}