//matrix multiplication
#include<stdio.h>
int main(){
    int r;
    printf("Enter the row  size of the array: ");
    scanf("%d",&r);
    int c;
    printf("Enter the col  size of the array: ");
    scanf("%d",&c);
    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int r1;
    printf("Enter the row  size of the second array: ");
    scanf("%d",&r1);
    int c1;
    printf("Enter the col  size of the second array: ");
    scanf("%d",&c1);
    int arr2[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int res[r][c1];
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            res[i][j]=0;
            for(int k=0;k<c;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Resultant matrix:\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}