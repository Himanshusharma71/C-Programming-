// #include <stdio.h>

// #define ROWS 3
// #define COLS 4
// void addTwoMatrix(int array1[ROWS][COLS], int array2[ROWS][COLS], int result[ROWS][COLS]) {
//     for (int i = 0; i < ROWS; i++) {
//         for (int j = 0; j < COLS; j++) {
//             result[i][j] = array1[i][j] + array2[i][j];
//         }
//     }
// }
// void printMatrix(int matrix[ROWS][COLS]) {
//     for (int i = 0; i < ROWS; i++) {
//         for (int j = 0; j < COLS; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int array1[ROWS][COLS] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };
//     int array2[ROWS][COLS] = {
//         {4, 3, 7, 4},
//         {10, 9, 7, 11},
//         {12, 10, 11, 12}
//     };
//     int result[ROWS][COLS];
//     addTwoMatrix(array1, array2, result);
    
//     printf("Resultant Matrix after addition:\n");
//     printMatrix(result);

//     return 0;
// }

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

    // Calculate the sum of the matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
