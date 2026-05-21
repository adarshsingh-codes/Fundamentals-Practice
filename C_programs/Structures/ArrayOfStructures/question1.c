//take input of multiple cricektersa nd sort on the basis of avg_runs
#include<stdio.h>
struct Cricketer{
    char name[100];
    int age;
    int matches;
    float avg_runs;
};
int main(){
    int n;
    printf("Enter the number of cricketers");
    scanf("%d",&n);
    struct Cricketer c[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %f",c[i].name,&c[i].age,&c[i].matches,&c[i].avg_runs);
    }
    //sorting the given structure on the basis off avg_runs
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(c[j].avg_runs>c[j+1].avg_runs){
                struct Cricketer temp;
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
                
            }  
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %d %d %.2f\n",c[i].name,c[i].age,c[i].matches,c[i].avg_runs);
    }
    return 0;
}