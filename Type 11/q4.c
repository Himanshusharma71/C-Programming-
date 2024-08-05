#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);

    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of the 1st matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of the 2nd matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate the difference of the matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\n difference of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
