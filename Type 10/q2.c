#include <stdio.h>
void printUniqueElements(int arr[], int size) {
    int unique[size];
    int uniqueIndex = 0;
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[uniqueIndex++] = arr[i];
        }
    }
    printf("Unique elements in the array are:\n");
    for (int i = 0; i < uniqueIndex; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printUniqueElements(arr, size);
    return 0;
}
