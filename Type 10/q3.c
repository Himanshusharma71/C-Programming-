#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;
    int checked[size];
    int checkedIndex = 0;
    
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        
        for (int k = 0; k < checkedIndex; k++) {
            if (arr[i] == checked[k]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            int duplicateCount = 0;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    duplicateCount++;
                }
            }
            if (duplicateCount > 0) {
                count++;
                checked[checkedIndex++] = arr[i];
            }
        }
    }
    
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int duplicateCount = countDuplicates(arr, size);
    
    printf("Total number of duplicate elements in the array: %d\n", duplicateCount);

    return 0;
}
