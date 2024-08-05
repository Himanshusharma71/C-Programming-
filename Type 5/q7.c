#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch((discriminant >= 0) - (discriminant < 0)) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %f\n", root1);
            printf("Root 2 = %f\n", root2);
            break;
        case -1:
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %f + %fi\n", realPart, imaginaryPart);
            printf("Root 2 = %f - %fi\n", realPart, imaginaryPart);
            break;
        case 0:
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %f\n", root1);
            break;
    }

    return 0;
}