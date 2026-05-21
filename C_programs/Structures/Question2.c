// Inventory System
// Create a structure Item with:
// item number
// item name
// quantity
// rate
// Take N items and display:
// item name
// total price of each item
// where:
// total price = quantity × rate
#include<stdio.h>
struct Item{
    int itemno;
    char itemname[100];
    int quantity;
    int rate;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Item x[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d",&x[i].itemno,x[i].itemname,&x[i].quantity,&x[i].rate);
    }
    int total=0;
    for(int i=0;i<n;i++){
        total=x[i].rate*x[i].quantity;
        printf("%s %d",x[i].itemname,total);
    }
    return 0;
}