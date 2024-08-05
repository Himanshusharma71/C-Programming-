#include <stdio.h>

int main() {
    float P, T, R, SI;
    printf("Enter Principal amount: ");
    scanf("%f", &P);
    printf("Enter Time period (in years): ");
    scanf("%f", &T);
    printf("Enter Rate of interest: ");
    scanf("%f", &R);
    SI = (P * T * R) / 100;
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
