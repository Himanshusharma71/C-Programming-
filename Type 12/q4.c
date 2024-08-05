#include <stdio.h>

int sumUpperTriangular(int matrix[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
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

    int sum = sumUpperTriangular(matrix, size);
    printf("Sum of upper triangular matrix: %d\n", sum);

    return 0;
}