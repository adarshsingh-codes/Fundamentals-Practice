//print only the upper triagnle and also only the lower triangle

#include<stdio.h>
int main(){
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The upper triangle is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("The lower triangle is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                printf("%d ",arr[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}