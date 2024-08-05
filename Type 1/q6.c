#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    printf("Input minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    printf("%d Hours, %d Minutes\n", hours, remainingMinutes);

    return 0;
}