//subtract the sum of odd index values to the sum of even index values
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int digits[100];
    int j=1;
    while(n>0){
        digits[j]=n%10;
        n=n/10;
        j++;
    }
    int sum_even=0;
    int sum_odd=0;
    for(int i=j-1;i>0;i--){
        if(i%2==0){
            sum_even+=digits[i];
        }
        else{
            sum_odd+=digits[i];
        }
    }
    int diff=sum_odd-sum_even;
    printf("the difference is: %d",diff);
    return 0;
}