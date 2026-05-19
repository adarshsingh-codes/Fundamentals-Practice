//sum of each individual row
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        printf("Sum of row %d is: %d\n",i,sum);
    }
    return 0;

}