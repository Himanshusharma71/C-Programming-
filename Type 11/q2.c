#include <stdio.h>
void rightRotateByOne(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array:\n");
    printArray(arr, size);
    
    rightRotateByOne(arr, size);
    
    printf("Array after right rotation by one position:\n");
    printArray(arr, size);
    
    return 0;
}
