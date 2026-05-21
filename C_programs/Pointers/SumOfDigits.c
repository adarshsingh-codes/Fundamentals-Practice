//sum of digits using pointers

#include<stdio.h>
void sumodddigits(int* ptr){
    int sum=0;
    while(*ptr>0){
        int digit=*ptr%10;
        if(digit%2!=0)
            sum+=digit;
        *ptr=*ptr/10;
    }
    printf("The sum is %d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    sumodddigits(&n);
    return 0;
}