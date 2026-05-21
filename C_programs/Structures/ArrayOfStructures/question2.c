// 1. Student Marks System
// Create a structure Student with:
// name
// roll
// marks
// Take N students and:
// display highest scorer
// display average marks

#include<stdio.h>
struct Student{
     char name[100];
     int roll;
     int marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);
    }
    int max=s[0].marks;
    
    int sum=0;
    for(int i=0;i<n;i++){
        if(max<s[i].marks){
            max=s[i].marks;
        }
        sum+=s[i].marks;
    }
    float avg=(float)sum/n;
    printf("The max is %d\nThe Avg is %.2f",max,avg);
    return 0;
}