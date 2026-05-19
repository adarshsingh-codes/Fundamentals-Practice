// If the numbers are not the same, 
// the output displays "Arranged elements are: "
//  followed by the input array sorted array in 
//  ascending order separated by space.
// If the numbers are the same, the output displays
//  "All numbers are the same".

#include<stdio.h>
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int valid=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            valid=0;
            break;
        }
    }
    if(valid==1){
        printf("All elements are same\n");
    }else{
        insertionsort(arr,n);
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}