//convert digits to words eg 1234 to one two three four
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int digits[100];
    int i=0;
    while(n>0){
        digits[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        switch(digits[j]){
            case 0: printf("zero ");
            break;
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
    return 0;
}