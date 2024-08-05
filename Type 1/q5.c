#include <stdio.h>

int main() {
    float kmPerHour, milesPerHour;

    printf("Input kilometers per hour: ");
    scanf("%f", &kmPerHour);

    milesPerHour = kmPerHour * 0.621371;

    printf("%.6f miles per hour\n", milesPerHour);

    return 0;
}