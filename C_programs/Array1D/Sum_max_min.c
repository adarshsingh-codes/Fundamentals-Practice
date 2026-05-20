//sum,max,min of array

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Sum is %d\n",sum);
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
return 0;
}