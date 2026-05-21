//all fucntions in the <ctype.h>

#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        if(isalpha(c)){
            printf("%d index is alphabet %c\n",i,c);
        }
        if(isdigit(c)){
            printf("%d index is a number %c\n",i,c);
        }
        if(isalnum(c)){
            printf("%d charcter is either a number/alphabet\n",i);
        }
        if(islower(c)){
            printf("%d index is lowercase\n",i);
        }if(isupper(c)){
            printf("%d indexis highercase\n",i);
        }
    }
    char ch1 = 'A';
    char ch3 = 'a';
    printf("tolower(A): %c\n", tolower(ch1));
    printf("toupper(a): %c\n", toupper(ch3));
    return 0;
}