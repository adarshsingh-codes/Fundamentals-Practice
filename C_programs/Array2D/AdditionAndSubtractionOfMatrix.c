//addition and subtraction of matrix;
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
    int brr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&brr[i][j]);
        }
    }   
    int sum[n][n];
    printf("The sum of the matrixes is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    int diff[n][n];
    printf("The difference of the matrixes is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            diff[i][j]=arr[i][j]-brr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
return 0;
}