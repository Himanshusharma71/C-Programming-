#include <stdio.h>

int main() {

     int arr[]={2,4,5,6,7,4,1,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int copyArr[length];
    for (int i = 0; i < length-1; i++) {
        copyArr[i] = arr[i];
    }
    printf("Original array elements are:\n");
    for (int i = 0; i < length-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Copied array elements are:\n");
    for (int i = 0; i < length-1; i++) {
        printf("%d ", copyArr[i]);
    }
    printf("\n");

    return 0;
}
