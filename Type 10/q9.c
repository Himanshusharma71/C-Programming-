#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array in ascending order using Bubble Sort
void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to sort the array in descending order using Bubble Sort
void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Enter 1 to sort in ascending order, 2 to sort in descending order: ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubbleSortAscending(arr, size);
        printf("Array sorted in ascending order:\n");
    } else if (choice == 2) {
        bubbleSortDescending(arr, size);
        printf("Array sorted in descending order:\n");
    } else {
        printf("Invalid choice\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
