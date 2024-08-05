#include <stdio.h>

// Function to calculate the sum of each row
void sumRows(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
}

// Function to calculate the sum of each column
void sumColumns(int matrix[][10], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
}

int main() {
    int matrix[10][10];
    int rows, cols;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Get the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the sum of each row
    printf("Sum of each row:\n");
    sumRows(matrix, rows, cols);

    // Calculate and print the sum of each column
    printf("Sum of each column:\n");
    sumColumns(matrix, rows, cols);

    return 0;
}