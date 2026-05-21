//count vowels,consonants,digits,specialchars
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    int z=strlen(str);
    int vowel=0;
    int cons=0;
    int digit=0;
    int special=0;
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        if(isdigit(c)){
            digit++;
        }
        else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            vowel++;
        }else if(isalpha(c)){
            cons++;
        }else{
            special++;
        }
    }
    printf("Vowel: %d\n",vowel);
    printf("Consonant: %d\n",cons);
    printf("Digit:%d \n",digit);
    printf("Special:%d \n",special);
    return 0;
}