#include <stdio.h>

// Function to check if a matrix is a symmetric matrix
int isSymmetricMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not a symmetric matrix
            }
        }
    }
    return 1; // Symmetric matrix
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

    printf("Matrix:\n");
    printMatrix(matrix, size);

    if (isSymmetricMatrix(matrix, size)) {
        printf("The matrix is a symmetric matrix.\n");
    } else {
        printf("The matrix is not a symmetric matrix.\n");
    }

    return 0;
}