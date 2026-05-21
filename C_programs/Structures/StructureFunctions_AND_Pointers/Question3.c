// Student Information System
// Create a structure Student with:
// roll number
// name
// age
// address
// Use a pointer with an array of structures.
// Take N students and:
// Print names of students whose age is 17.
// Print names of students with even roll numbers.
// Search and display details of a student using roll number.

#include<stdio.h>
struct Student{
    int roll;
    char name[100];
    int age;
    char address[100];
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    struct Student *ptr=s;
    for(int i=0;i<n;i++){
        scanf("%d %s %d %s",&ptr[i].roll,ptr[i].name,&ptr[i].age,ptr[i].address);
    }//ptr[i].name is same as (ptr+i)->name
    int search;
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(ptr[i].age==17){
            printf("%s ",ptr[i].name);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(ptr[i].roll%2==0){
            printf("%s ",ptr[i].name);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(ptr[i].roll==search){
            printf("%d %s %d %s",ptr[i].roll,ptr[i].name,ptr[i].age,ptr[i].address);
        }
    }
    return 0;

}