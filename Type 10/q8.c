#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key element
        }
    }
    return -1; // Return -1 if the key element is not found
}

int main() {
    int arr[] = {12, 45, 74, 65, 42, 32, 24, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, size, key);

    if (index != -1) {
        printf("Your number is present on index: %d\n", index);
    } else {
        printf("Your number is not present in the array\n");
    }

    return 0;
}