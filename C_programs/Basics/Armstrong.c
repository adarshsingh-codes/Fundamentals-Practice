//armstrong
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int original=n;
    int count=0;
    int digit[100];
    int sum=0;
    while(n>0){
        digit[count]=n%10;
        n=n/10;
        count++;
    } 
    for(int i=0;i<count;i++){
        int power=1;
        for(int j=0;j<count;j++){
            power=power*digit[i];
        }
        sum+=power;
    }
    if(sum==original){
        printf("Yes it is armstrong");
    }else{
        printf("No it is not armstrong");
    }
}