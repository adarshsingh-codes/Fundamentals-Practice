// Student Subject Marks System
// Create a structure Student with:
// name
// roll
// marks[3]
//
// Take N students and:
// 1. Calculate total marks
// 2. Calculate average marks
// 3. Print topper name

#include<stdio.h>
struct Student{
    char name[100];
    int roll;
    int marks[3];
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",s[i].name,&s[i].roll);
        for(int j=0;j<3;j++){
            scanf("%d",&s[i].marks[j]);
        }
    }
    int max=0;
    int index=0;
    for(int i=0;i<n;i++){
        int total=0;
        for(int j=0;j<3;j++){
            total+=s[i].marks[j];
        }
        float avg=(float)total/3;
        printf("%s %d %.2f\n",s[i].name,total,avg);
        if(total>max){
            max=total;
            index=i;
        }
    }
    printf("Topper: %s",s[index].name);
    return 0;
}