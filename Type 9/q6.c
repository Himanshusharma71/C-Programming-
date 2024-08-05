#include <stdio.h>


int main() {
    int arr[] = {12, 34, 5, 67, 89, 23, 10, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (even_count)++;
        } else {
            (odd_count)++;
        }
    }
    printf("Total even elements: %d\n", even_count);
    printf("Total odd elements: %d\n", odd_count);
    return 0;
}