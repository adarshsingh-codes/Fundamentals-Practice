//max sum of row among all the rows;
#include<stdio.h>
#include<limits.h>
int main(){
    int r;
    printf("Enter the row size of the matrix: ");
    scanf("%d",&r);
    int c;
    printf("Enter the column size of the matrix: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max_sum=INT_MIN;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    printf("Max sum of the row is %d\n",max_sum);
return 0;
}