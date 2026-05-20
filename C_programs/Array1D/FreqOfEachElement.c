//freq of each element
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        printf("%d ",count[i]);
    }
    return 0;
}