#include <stdio.h>

int is_valid_triangle(int a, int b, int c) {
    if (a + b + c == 180) {
        return 1; // valid triangle
    } else {
        return 0; // invalid triangle
    }
}

int main() {
    int a, b, c;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (is_valid_triangle(a, b, c)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (is_valid_triangle(a, b, c)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}