#include <stdio.h>

#define ROWS 3
#define COLS 4
int addTwoMatrix(int array1[ROWS][COLS], int array2[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if(array1[i][j] == array2[i][j]){
                printf("the two matrix are equal \n");
            }
            else{
                printf("the given matrix is not equal \n");
            }
            break;
        }
    }
    return 1;
}

int main() {
    int array1[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int array2[ROWS][COLS] = {
        {4, 3, 7, 4},
        {10, 9, 7, 11},
        {12, 10, 11, 12}
    };
    printf(addTwoMatrix(array1, array2));

    return 0;
}
