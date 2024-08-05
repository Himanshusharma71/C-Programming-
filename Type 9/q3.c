#include <stdio.h>

int main() {

    int arr[]={2,4,3,6,8,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < length-1; i++) {
        sum += arr[i];
    }

    // Print the sum of the elements
    printf("The sum of all array elements is: %d\n", sum);

    return 0;
}
