//reverse a string
#include<stdio.h>
#include<string.h>
void reverse(char str[],int low,int high){
    int i=low;
    int j=high-1;
    while(j>i){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
        i++;
    }
}
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';//find where \n occurs and replace it with \0;
    int z=strlen(str);
    reverse(str,0,z);
    printf("%s",str);
    return 0;
}