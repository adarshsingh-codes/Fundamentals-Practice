// 4. Movie Database
// Create a structure Movie with:
// movie name
// rating
// release year
// Tasks:
// sort by rating descending
// print movies released after 2020
#include<stdio.h>
struct Movie{
char name[100];
float rating;
int year;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Movie m[n];
    for(int i=0;i<n;i++){
        scanf("%s %f %d",m[i].name,&m[i].rating,&m[i].year);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(m[j].rating<m[j+1].rating){
                struct Movie temp;
                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(m[i].year>2020){
            printf("%s %.2f %d",m[i].name,m[i].rating,m[i].year);
        }
    }

    return 0;
}