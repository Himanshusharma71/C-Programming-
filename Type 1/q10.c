#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remainingSeconds = seconds % 3600;

    minutes = remainingSeconds / 60;
    remainingSeconds = remainingSeconds % 60;

    printf("There are:\n");
    printf("H:M:S - %d:%d:%d\n", hours, minutes, remainingSeconds);

    return 0;
}