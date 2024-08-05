#include <stdio.h>
#include <math.h>

int main() {
    double side, area;

    // Taking input from user
    printf("Enter side of the equilateral triangle: ");
    scanf("%lf", &side);

    // Calculating the area
    area = (sqrt(3) / 4) * (side * side);

    // Displaying the area
    printf("Area of equilateral triangle = %.1lf sq. units\n", area);

    return 0;
}
