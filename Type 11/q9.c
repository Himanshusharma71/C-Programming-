#include <stdio.h>

// Function to calculate the sum of minor diagonal elements
int sumMinorDiagonal(int matrix[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][size - i - 1];
    }
    return sum;
}

int main() {
    int matrix[10][10];
    int size;

    // Get the size of the matrix from the user
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &size);

    // Get the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the sum of minor diagonal elements
    int sum = sumMinorDiagonal(matrix, size);
    printf("Sum of minor diagonal elements: %d\n", sum);

    return 0;
}