//convert digits to words eg 1234 to one two three four
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("zero\n");
        return 0;
    }
    int digits[20];
    int count=0;
    while(n>0){
        digits[count]=n%10;
        count++;
        n=n/10;
    }
    for(int i=count-1;i>=0;i--){
        switch(digits[i]){
            case 0: printf("zero "); break;
            case 1: printf("one ");
            break;
             case 2: printf("two ");
            break;
             case 3: printf("three ");
            break;
             case 4: printf("four ");
            break;
             case 5: printf("five ");
            break;
             case 6: printf("six ");
            break;
             case 7: printf("seven ");
            break;
             case 8: printf("eight ");
            break;
             case 9: printf("nine ");
            break;

        }
    }
    printf("\n");
    return 0;
}