#include<stdio.h>

int main() {
    int n,i,j,d;
    prinf("Enter the size of array :" );
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of an array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the no. of positions to rotate");
    scanf("%d",&d);
    d=d%n;
    for(i=0;i<d;i++){
        int temp=arr[0];
        for(j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("rotated array : ");
    for(i=0;i<n;i++){
        printf(arr[i]);
    }

    return 0;
}