/**
 * C program to calculate the average value of two items
 */

#include <stdio.h>

int main() {
    float weight1, weight2, num1, num2, total_weight, average;

    /* Input weights and numbers of items */
    printf("Enter weight of Item1: ");
    scanf("%f", &weight1);
    printf("Enter number of Item1: ");
    scanf("%f", &num1);
    printf("Enter weight of Item2: ");
    scanf("%f", &weight2);
    printf("Enter number of Item2: ");
    scanf("%f", &num2);

    total_weight = (weight1 * num1) + (weight2 * num2);
    float total_num = num1 + num2;
    average = total_weight / total_num;
    printf("Average Value = %.6f\n", average);

    return 0;
}