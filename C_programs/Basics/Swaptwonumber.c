//swap two numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("The numbers after swap are: %d %d",a,b);
    return 0;
}