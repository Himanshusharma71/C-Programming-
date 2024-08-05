#include <stdio.h>

int main() {
    int amount, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    printf("Input the amount: ");
    scanf("%d", &amount);

    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes20 = amount / 20;
    amount %= 20;

    notes10 = amount / 10;
    amount %= 10;

    notes5 = amount / 5;
    amount %= 5;

    notes2 = amount / 2;
    amount %= 2;

    notes1 = amount;

    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", notes100);
    printf("%d Note(s) of 50.00\n", notes50);
    printf("%d Note(s) of 20.00\n", notes20);
    printf("%d Note(s) of 10.00\n", notes10);
    printf("%d Note(s) of 5.00\n", notes5);
    printf("%d Note(s) of 2.00\n", notes2);
    printf("%d Note(s) of 1.00\n", notes1);

    return 0;
}