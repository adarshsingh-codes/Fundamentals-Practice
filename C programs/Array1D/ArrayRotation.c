//array rotation r=towards right by k
#include<stdio.h>
void reverse(int arr[],int low,int high){
    int i=low;
    int j=high-1;
    while(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
}
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int k;
    printf("Enter K: ");
    scanf("%d",&k);
    printf("Enter elements: ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n);
    reverse(arr,0,k);
    reverse(arr,k,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}