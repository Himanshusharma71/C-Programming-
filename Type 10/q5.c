#include <stdio.h>

// Function to merge two arrays into a third array
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    int i, j, k;

    // Copy elements from arr1 to arr3
    for (i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements from arr2 to arr3
    for (j = 0; j < size2; j++) {
        arr3[i + j] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size3 = size1 + size2;
    int arr3[size3];

    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    mergeArrays(arr1, size1, arr2, size2, arr3);

    printf("Merged Array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}