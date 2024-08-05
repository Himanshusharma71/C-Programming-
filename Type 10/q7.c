#include <stdio.h>

void separateEvenOdd(int arr[], int size, int even[], int *evenSize, int odd[], int *oddSize) {
    *evenSize = 0;
    *oddSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[(*evenSize)++] = arr[i];
        } else {
            odd[(*oddSize)++] = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int even[size], odd[size]; // Assuming the worst case where all elements could be either even or odd
    int evenSize, oddSize;

    separateEvenOdd(arr, size, even, &evenSize, odd, &oddSize);

    printf("Even elements:\n");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements:\n");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
