// The first line of input consists of an integer T,
//  representing the number of test cases.
// For each test case:

// The first line contains two integers R and C,
//  representing the number of rows and columns in the matrix.
// The next R lines each contain C space-separated integers,
//  representing the matrix elements.
// The last line contains two integers,representing the
//  indices of the row and column to be removed (0-based).
// Output format :
// For each test case, print the resulting matrix after
//  removing the specified row and column.


#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
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
        int m1,m2;
        scanf("%d %d",&m1,&m2);
        for(int i=0;i<r;i++){
            if(m1==i){
                continue;
            }
            for(int j=0;j<c;j++){
                if(m2==j){
                    continue;
                }
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}