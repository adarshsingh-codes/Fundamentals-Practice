//fibonanci at the index search/find
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    int b=1;
    int c=0;
    if(n==1||n==2){
        printf("The numer at index position is 1");
        return 0;
    }
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("The number at index position is %d",c);
    return 0;
}