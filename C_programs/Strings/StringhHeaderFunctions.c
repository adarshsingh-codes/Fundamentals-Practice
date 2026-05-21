//All functions in #include<string.h>
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    fgets(str1,100,stdin);
    int z=strlen(str1);
    printf("The size of the string is: %d\n",z);
    char str2[100];
    strcpy(str2,str1);
    printf("the copied string is:%s\n",str2);
    char str3[100];
    strncpy(str3,str1,3);
    str3[3]='\0';
    printf("The first 3 characters copied are %s\n",str3);
    char str4[100]="Hello";
    char str5[]="world";
    strcat(str4,str5);
    printf("Concatenated string is: ",str4);
    char str6[] = "Hello World";
    printf("Substring found: %s\n", strstr(str6, "World"));
     char str10[] = "Hello";
    strrev(str10);
    printf("Reversed string: %s\n", str10);
    char str11[] = "hello";
    strupr(str11);
    printf("Uppercase: %s\n", str11);
    char str12[] = "HELLO";
    strlwr(str12);
    printf("Lowercase: %s\n", str12);
    
    //if(strcmp(strings[i],thestring)==0)
    //this is for comparing strings if true ==0 if false it will be !=0
    return 0;
}