#include <stdio.h>

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[][10], int transpose[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to print a matrix
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

    printf("Original Matrix:\n");
    printMatrix(matrix, size);

    int transpose[10][10];
    transposeMatrix(matrix, transpose, size);

    printf("Transpose Matrix:\n");
    printMatrix(transpose, size);

    return 0;
}