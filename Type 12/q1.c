#include <stdio.h>
void interchangeDiagonals(int matrix[][10], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][size - i - 1];
        matrix[i][size - i - 1] = temp;
    }
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
    printf("Enter the size of the square matrix : ");
    scanf("%d", &size);

    if (size > 10) {
        printf("Size exceeds maximum limit.\n");
        return 1;
    }

    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix, size);

    interchangeDiagonals(matrix, size);

    printf("Matrix after interchanging diagonals:\n");
    printMatrix(matrix, size);

    return 0;
}