//find prime number for the given range;
#include<stdio.h>
int main(){
    int start,end;
    printf("Enter the range: ");
    scanf("%d %d",&start,&end);
    for(int n=start;n<=end;n++){
        int prime=1;
        if(n==0||n==1){
            prime=0;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d ",n);
        }
    }
    return 0;
}