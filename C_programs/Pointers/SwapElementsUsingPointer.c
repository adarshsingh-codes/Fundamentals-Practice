//Swap the first and last element of the aray using a pointer

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    int temp=*ptr;
    *ptr=*(ptr+n-1);
    *(ptr+n-1)=temp;
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}