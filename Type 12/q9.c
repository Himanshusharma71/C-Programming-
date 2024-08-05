#include <stdio.h>

// Function to check if a matrix is a sparse matrix
int isSparseMatrix(int matrix[][10], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    if ((double)count / (size * size) > 0.5) {
        return 1; // Sparse matrix
    } else {
        return 0; // Not a sparse matrix
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

    printf("Matrix:\n");
    printMatrix(matrix, size);

    if (isSparseMatrix(matrix, size)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}