//syntax/learning of strucutres
#include<stdio.h>
struct Student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct Student s;
    scanf("%s %d %f",s.name,&s.roll,&s.cgpa);
    printf("The name is : %s\n",s.name);
    printf("The rollno is %d\n",s.roll);
    printf("The cgpa is %.2f\n",s.cgpa);
    return 0;
}
