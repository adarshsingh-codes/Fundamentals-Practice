#include<stdio.h>
struct Employee{
    char name[100];
    float salary;
    int hours;
};
void Total(struct Employee e){
    if(e.hours>=12){
        e.salary+=150;
    }
    else if(e.hours>=10){
        e.salary+=100;
    }
    else if(e.hours>=8){
        e.salary+=50;
    }else{
        e.salary+=0;
    }
    printf("\nFinal Salary: $%.2f\n",e.salary);
    printf("Total Salary: $%.2f",e.salary*30);
}
int main(){
    struct Employee e;
    scanf("%s",e.name);
    scanf("%f",&e.salary);
    scanf("%d",&e.hours);
    Total(e);
    return 0;
}