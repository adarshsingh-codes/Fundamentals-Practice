#include<stdio.h>
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter elements for first array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("Enter the number of elements for second array");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter elements for Second array: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int brr[n+m];
    for(int i=0;i<n;i++){
        brr[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        brr[i+n]=arr2[i];
    }
    bubbleSort(brr,n+m);
    for(int i=0;i<n+m;i++){
        printf("%d ",brr[i]);
    }
}