#include <stdio.h>

int main() {
    int arr[] = {2, 4, 5, -6, -7, 4, 1, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    for (int i = 0; i < length-1; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    // Print the number of negative elements
    printf("The total number of negative elements in the array is: %d\n", count);

    return 0;
}

