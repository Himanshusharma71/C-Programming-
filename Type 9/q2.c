#include <stdio.h>

int main() {
    int arr[] = {2, 4, 5, -6, -7, 4, 1, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("The negative elements of the array are:\n");
    for (int i = 0; i < length; i++) {  // Changed to '<' instead of '<='
        if (arr[i] < 0) {
            printf("%d ", arr[i]);  // Corrected the printf statement
        }
    }
    printf("\n");

    return 0;
}
