//rotate the array by k posiiton in right
#include<stdio.h>
void reverse(int arr[],int low,int high){
    int i=low;
    int j=high-1;
    while(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int k;
    printf("Enter the value of k: ");
    scanf("%d",&k);
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