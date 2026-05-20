//check if the array is sorted or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isSorted=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            isSorted=1;
            break;
        }
    }
    if(isSorted==0){
        printf("Array is sorted");
    }
    else {
        printf("Array is not sorted");
    }
    return 0;
}