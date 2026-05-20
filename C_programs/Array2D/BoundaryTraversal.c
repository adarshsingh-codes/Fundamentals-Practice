//boundar traversal of the matrix
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
        for(int j=0;j<c;j++){
            if(i==0||j==0||i==r-1||j==c-1){
                printf("%d ",arr[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
return 0;
}