//concatenate two arrays
#include<stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    int *ptr=arr1;
    for(int i=0;i<n1;i++){
        scanf("%d",(ptr+i));
    }
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    int *ptr2=arr2;
    for(int i=0;i<n2;i++){
        scanf("%d",(ptr2+i));
    }
    int crr[n1+n2];
    int *ptr3=crr;
    for(int i=0;i<n1;i++){
        *(ptr3+i)=*(ptr+i);
    }
    for(int i=0;i<n2;i++){
        *(ptr3+i+n1)=*(ptr2+i);
    }
    for(int i=0;i<n1+n2;i++){
        printf("%d ",*(ptr3+i));
    }
    return 0;
}
