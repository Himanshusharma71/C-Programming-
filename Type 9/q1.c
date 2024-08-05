#include <stdio.h>

int main() {
    int arr[]={2,4,5,6,7,4,1,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("The elements of the array are:\n");
    for (int i = 0; i <=length-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i=0;i<length;i++){
        for(int j=0;j<length-1-i;j++){
            if(arr[j]<arr[j+1]){
            arr[j]=arr[j]^arr[j+1];
            arr[j+1]=arr[j]^arr[j+1];
            arr[j]=arr[j]^arr[j+1];
            }
        }
    }
    for (int i = 0; i <=length-1; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("%d\n",arr[1]);

    return 0;
}
