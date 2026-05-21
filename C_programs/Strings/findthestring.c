// Input format :
// The first line contains an integer n, the number of strings in the array.

// The second line contains n strings, representing the elements of the array, separated by a space.

// The last line contains a string s, which Akash wants to search for.

// Output format :
// If s is found in the array, output "Found in row: x", where x is the row number where the string is found (1-indexed).

// If s is not found in any row, output "Not found".

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char thestring[100];
    char strings[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%s",strings[i]);
    }
    scanf("%s",thestring);
    for(int i=0;i<n;i++){
        if(strcmp(strings[i],thestring)==0){
            printf("Found in row: %d\n",i+1);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}