#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, formula, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    formula = b * b - 4 * a * c;

    if (formula > 0) {
        root1 = (-b + sqrt(formula)) / (2 * a);
        root2 = (-b - sqrt(formula)) / (2 * a);
        printf("Root1: %.2f Root2: %.2f\n", root1, root2);
    } else if (formula == 0) {
        root1 = -b / (2 * a);
        printf("Root1: %.2f Root2: %.2f\n", root1, root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-formula) / (2 * a);
        printf("Root1: %.2f + %.2fi Root2: %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}