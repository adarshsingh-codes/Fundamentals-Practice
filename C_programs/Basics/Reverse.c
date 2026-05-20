//Reverse a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
      int digit=n%10;
      rev=rev*10+digit;
      n=n/10;  
    }
    printf("The reverse number is %d",rev);
    return 0;
}