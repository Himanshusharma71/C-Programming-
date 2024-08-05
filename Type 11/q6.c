#include <stdio.h>

int main() {
    int r, c, i, j, n;
    int b[100][100], mult[100][100];

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);

    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Enter the number to multiply with the matrix: ");
    scanf("%d", &n);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            mult[i][j] = n * b[i][j];
        }
    }

    printf("\nProduct of the matrix with %d:\n", n);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
