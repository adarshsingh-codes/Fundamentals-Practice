// Create a structure Product with:
// product number
// cost
// number of items
// expiry date
// Take N products and:
// Display details of the product with the given product number.
// Display products whose cost is greater than the given cost.
// Display products with the given expiry date.



#include<stdio.h>
#include<string.h>

struct Customer{
    int pnum;
    float cost;
    int number;
    char expiry[100];
};
int main(){
    int n;
    scanf("%d",&n);
    struct Customer c[n];
    for(int i=0;i<n;i++){
        scanf("%d %f %d %s",&c[i].pnum,&c[i].cost,&c[i].number,c[i].expiry);
    }
    int search_pnum;
    scanf("%d",&search_pnum);
    float cost_search;
    scanf("%f",&cost_search);
    char expiry_search[100];
    scanf("%s",expiry_search);
    printf("Product details of the searched product number\n");
    for(int i=0;i<n;i++){
        if(c[i].pnum==search_pnum){
            printf("%d %f %d %s",c[i].pnum,c[i].cost,c[i].number,c[i].expiry);
        }
    }
    printf("Product details of the searched product cost\n");
    for(int i=0;i<n;i++){
        if(c[i].cost>cost_search){
            printf("%d %f %d %s",c[i].pnum,c[i].cost,c[i].number,c[i].expiry);
        }
    }
    printf("Product details with the searched expiry date\n");
    for(int i=0;i<n;i++){
        if(strcmp(c[i].expiry,expiry_search)==0){
            printf("%d %f %d %s",c[i].pnum,c[i].cost,c[i].number,c[i].expiry);
        }
    }
    return 0;
}