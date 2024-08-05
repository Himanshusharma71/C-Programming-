#include <stdio.h>

int main() {
    int n, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The array must have at least one element.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position (0 to %d) of the element to be deleted: ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position! position should be between 0 and %d.\n", n - 1);
        return 1;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
