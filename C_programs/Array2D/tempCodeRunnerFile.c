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
    printf("The sum of the matrixes is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]+=brr[i][j];
        }
    }
    printf("The difference of the matrixes is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]-=brr[i][j];
        }
    }
return 0;
}