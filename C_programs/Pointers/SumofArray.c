//sum of the elements of array using pointers
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    int *ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("Sum: %d",sum);
    return 0;
}