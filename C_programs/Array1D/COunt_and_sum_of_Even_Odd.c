//count number of even and number of odd elements
//also sum of even places and sum of odd places
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int counteven=0,countodd=0;
    int arr[n];
    int sumodd=0;
    int sumeven=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumeven+=arr[i];
            counteven++;
        }else{
            countodd++;
            sumodd+=arr[i];
        }
    }
    printf("EvenCounts : %d\nOddCounts : %d\n",counteven,countodd);
    printf("SumOdd: %d\nSumEven: %d",sumodd,sumeven);
    return 0;
}