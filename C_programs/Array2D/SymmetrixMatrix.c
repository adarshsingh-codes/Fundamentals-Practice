//Check symmetric matrix
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
    if(r!=c){
        printf("Not Symmetric");
        return 0;
    }
    int isSym=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!=arr[j][i]){
                isSym=0;
                break;
            }   
        }
    }
    if(isSym==1){
        printf("Symmetric");
    }else{
        printf("Not symmetric");
    }
return 0;
}