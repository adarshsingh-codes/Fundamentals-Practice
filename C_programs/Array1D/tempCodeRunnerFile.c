//find the  second maximum and second minimum from the array

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int sec_max=INT_MIN;
    int min=arr[0];
    int sec_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }else if(arr[i]!=max&&arr[i]>sec_max){
            sec_max=arr[i];
        }
        if(arr[i]<min){
            sec_min=min;
            min=arr[i];
        }else if(arr[i]!=min&&arr[i]<sec_min){
            sec_min=arr[i];
        }
    }
    printf("Second max: %d\n",sec_max);
    printf("Second Min: %d",sec_min);
    return 0;
}