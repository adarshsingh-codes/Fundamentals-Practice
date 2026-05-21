// Concert Ticket System
// Create:
// structure Visit with:
// number of members
// student status (1 or 0)
// nested structure Loyal containing Visit
// Base ticket price = Rs. 900
// Discounts:
// 5% student discount
// 10% group discount if members > 5
// Calculate and print the total ticket cost.

#include<stdio.h>
struct Visit{
    int member;  
    int n;
};
struct Loyal{
    struct Visit v;
};
int main(){
    struct Loyal l;
    scanf("%d",&l.v.member);
    scanf("%d",&l.v.n);
    float discount=0.0;
    if(l.v.member>5){
        if(l.v.n==1){
            discount=(float)l.v.member*(900*(1-0.05)*(1-0.10));
            printf("Rs.%.2f",discount);
        }else{
            discount=(float)l.v.member*(900*(1-0.10));
            printf("Rs.%.2f",discount);
        }
    }else{
        printf("Rs. %.2f",(float)l.v.member*900);
    }
    return 0;
}