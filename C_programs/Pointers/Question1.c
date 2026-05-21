//basic
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1000){
        printf("Invalid Input");
        return 0;
    }
    int *ptr=&n;
    int max=0;
    int min=9;
    if(*ptr>=1000){
        while(*ptr>0){
            int digit=*ptr%10;
            if(digit>max){
                max=digit;
            }
            if(digit<min){
                min=digit;
            }
            *ptr=*ptr/10;
        }
    }
    int sum=max+min;
    printf("%d",sum);
    return 0;
}