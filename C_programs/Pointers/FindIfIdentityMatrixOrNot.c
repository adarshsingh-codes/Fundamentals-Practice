//check if the iput array is idenity or not
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
    int notIden=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(*(*(arr+i)+j)!=1){
                    notIden=0;
                    break;
                }
            }
            else{
                if(*(*(arr+i)+j)!=0){
                    notIden=0;
                    break;
                }
            }
        }
    }
    if(notIden==1){
        printf("Identity");
    }else{
        printf("not identity");
    }
}