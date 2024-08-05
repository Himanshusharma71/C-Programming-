#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1)
        return size;

    int temp[size];
    int j = 0;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size - 1];

    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);
    size = removeDuplicates(arr, size);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
