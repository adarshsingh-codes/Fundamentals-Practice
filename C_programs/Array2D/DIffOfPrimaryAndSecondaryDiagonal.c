//sum of primary diagonal -sum of secondary diagonal
#include<stdio.h>
int main(){
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum_primary=0;
    int sum_secondary=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum_primary+=arr[i][j];
            }
            if((i+j)==n-1){
                sum_secondary+=arr[i][j];
            }
        }
    }
    printf("The Primary diagonal sum is : %d\n",sum_primary);
    printf("The secondary diagonal sum is: %d\n",sum_secondary);
    int diff=sum_primary-sum_secondary;
    printf("The difference between them is %d",diff);
}