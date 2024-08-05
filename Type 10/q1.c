#include<stdio.h>

int countoccur(int nums[], int size, int n) {
    if (size == 0) {
        return 0;
    }
    int count = 0;
    if (nums[size - 1] == n) {
        count = 1;
    }
    return count + countoccur(nums, size - 1, n);
}

int main() {
    int nums[] = {3, 4, 5, 73, 9, 5, 3, 9, 3, 4, 3, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int n;
    printf("Enter the number of count");
    scanf("%d",&n);
    
    int count = countoccur(nums, size, n);
    printf("the fecquency of the elements is : %d",count);

    return 0;
}