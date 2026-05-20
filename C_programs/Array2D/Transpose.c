//transpose of a matrix

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The transpose of the matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}