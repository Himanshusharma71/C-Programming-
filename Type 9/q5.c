#include <stdio.h>
int maximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size-2; i++) {
        if (arr[i] > max)  {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {12, 34, 5, 67, 89, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Maximum element: %d\n", maximum(arr, size));
    return 0;
}