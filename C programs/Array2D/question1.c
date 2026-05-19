// //Input format :
// The first line consists of two integers r and c, 
// separated by a space, representing the number of rows 
// and columns in the matrix.
// The next r lines contain c space-separated integers,
//  representing the elements of the matrix.
// Output format :
// If there are zeros in the matrix, display the modified
//  matrix after replacing rows and columns with zeros 
//  if any element in the row or column is zero. 
//  If there are no zeros in the matrix,
//   display the given matrix as it is.

#include<stdio.h>
int main(){
    int r;
    printf("Enter rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter cols: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int rows[r];
    int cols[c];
    for(int i=0;i<r;i++){
        rows[i]=0;
    }
    for(int j=0;j<c;j++){
        cols[j]=0;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(rows[i]==1||cols[j]==1){
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }   
}