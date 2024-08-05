#include <stdio.h>

int main() {
    int total_distance;
    float T_fuel, average;
    printf("Input total distance in km: ");
    scanf("%d", &total_distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &T_fuel);
    average = (float)total_distance / T_fuel;
    printf("Average consumption (km/lt) %.3f\n", average);

    return 0;
}