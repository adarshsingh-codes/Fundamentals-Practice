// Customer Bank System
// Create a structure Customer with:
// name
// account number
// balance
// Take N customer and:
// Print names of customers having balance less than 200.
// Add 3% interest to customers having balance more than 1000 and print updated balance.

#include<stdio.h>
struct Customers{
    char name[100];
    int accno;
    float bal;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Customers c[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %f",c[i].name,&c[i].accno,&c[i].bal);
    }
    printf("Customers with balance less than Rs.200:\n");
    for(int i=0;i<n;i++){
        if(c[i].bal<200){
            printf("%s ",c[i].name);
        }
    }
    for(int i=0;i<n;i++){
        if(c[i].bal>1000){
            c[i].bal+=c[i].bal*0.03;
            printf("Updated balance of %s: Rs. %.2f\n",c[i].name,c[i].bal);
        }
    }
    return 0;
}