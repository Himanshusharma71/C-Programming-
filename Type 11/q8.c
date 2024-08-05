#include <stdio.h>
int sumMainDiagonal(int matrix[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int matrix[10][10];
    int size;
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &size);

    // Get the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = sumMainDiagonal(matrix, size);
    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}