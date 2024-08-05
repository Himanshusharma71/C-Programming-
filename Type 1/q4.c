#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    float radius, volume;

    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0/3.0) * M_PI * radius * radius * radius;

    printf("The volume of sphere is %.6f\n", volume);

    return 0;
}