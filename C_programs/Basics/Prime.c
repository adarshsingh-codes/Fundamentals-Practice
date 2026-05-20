//check if a number is prime or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
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
        printf("The number is a prime.");
    }else{
        printf("The number is not prime");
    }
    return 0;
}