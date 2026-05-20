//fibonacci-find element at the given position
#include<stdio.h>
int main(){
    int n;
    printf("Enter the position: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c=0;
    if(n==1){
        printf("At position %d is %d",n,a);
    }
    else if(n==2){
        printf("At position %d is %d",n,b);
    }
    else{
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            //for getting the series we shall print here
        }
        printf("At position %d is %d",n,c);
    }
    return 0;
}