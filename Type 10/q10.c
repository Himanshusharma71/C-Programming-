#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort array elements in ascending order
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to separate and sort even and odd elements
void separateAndSort(int arr[], int size) {
    int evenCount = 0, oddCount = 0;
    int evenArr[100], oddArr[100];

    // Separate even and odd elements
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    // Sort even elements
    bubbleSort(evenArr, evenCount);

    // Sort odd elements
    bubbleSort(oddArr, oddCount);

    // Print sorted even and odd elements
    printf("Sorted even elements: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Sorted odd elements: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    separateAndSort(arr, size);

    return 0;
}