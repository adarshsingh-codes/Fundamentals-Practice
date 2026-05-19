// Input format :
// The input consists of a single integer N,
//  representing the size of the square matrix.
// The next N lines contain N space-separated integers, 
// representing the elements of the matrix.
// Output format :
// The output displays the lower triangular matrix based on the 
// input, with elements above the main diagonal replaced by zeros.

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
        for(int j=0;j<n;j++){
            if(j>i){
                arr[i][j]=0;
            }   
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}