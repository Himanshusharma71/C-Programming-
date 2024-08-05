#include <stdio.h>
int isLowerTriangular(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != 0) {
                return 0; // Not 
            }
        }
    }
    return 1; 
}

void printMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the matrix (max 10): ");
    scanf("%d", &size);

    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    printMatrix(matrix, size);

    if (isLowerTriangular(matrix, size)) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is not lower triangular.\n");
    }

    return 0;
}