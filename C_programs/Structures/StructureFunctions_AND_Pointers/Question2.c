#include<stdio.h>
struct Patients{
    int id;
    char name[100];
    int gender;
    int age;
};
void print_gender(struct Patients p[],int n){
    int count_male=0;
    int count_female=0;
    for(int i=0;i<n;i++){
        if(p[i].gender==1){
            count_male++;
        }else{
            count_female++;
        }
    }
    printf("Count: %d %d",count_male,count_female);
}
void print_age(struct Patients p[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(p[i].age>40){
            count++;
        }
    }
     printf("Above 40: ");
    if(count>0){
        for(int i=0;i<n;i++){
            if(p[i].age>40){
                printf("%s ",p[i].name);
            }
        }
    }else{
        printf("0");
    }
   
}
int main(){
    int n;
    scanf("%d",&n);
    struct Patients p[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d",&p[i].id,p[i].name,&p[i].gender,&p[i].age);
    }
    print_gender(p,n);
    printf("\n");
    print_age(p,n);
    return 0;
}