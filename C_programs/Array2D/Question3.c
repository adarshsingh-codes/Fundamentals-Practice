// Given a character matrix, count the vowels in each 
// row and replace all consonants with *.
//  Print the vowel count for every row and display the modified matrix.

#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of cols: ");
    scanf("%d",&c);
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %c",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int count_vowels=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]=='a'||arr[i][j]=='e'||arr[i][j]=='i'||arr[i][j]=='o'||arr[i][j]=='u'){
                count_vowels++;
            }else{
                arr[i][j]='*';
            }
        }
        printf("Row %d has %d vowels.\n",i,count_vowels);
    }
    printf("Modified Grid:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}