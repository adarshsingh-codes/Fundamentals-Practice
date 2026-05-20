//sum of each row;
#include<stdio.h>
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
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        printf("Sum of %d row is %d\n",i,sum);
    }
return 0;
}