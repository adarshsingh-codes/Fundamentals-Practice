// Problem Statement
// You are creating a shopping cart for an e-commerce website. Implement overloaded functions called calculateTotalPrice that can calculate the total price of different types of items, such as a single item, multiple items, or items with discounts. Each overloaded function should take the required parameters and return the calculated total price.
// Calculate the total price for a single item without quantity or discounts.
// Calculate the total price for multiple items in quantity without any discounts.
// Calculate the total price for multiple items with quantity and a discount percentage.
// Input format :
// The user should enter an integer corresponding to the desired option (1, 2, 3, or 4).
// If the choice is 1, the input consists of the price of the item, separated by a space.
// If the choice is 2, the input consists of the price of the item and the quantity, separated by a space.
// If the choice is 3, the program consists of the price of the item, the quantity, and the discount percentage, separated by a space.
// If the choice is 4, the program exits.
// If the choice is other than 1, 2, 3, or 4, it is considered an invalid choice.
// Output format :
// For the choices 1, 2, and 3, the output displays the calculated total price as a floating-point number with two decimal places.
// If the choice is 4, the program exits.
// If the choice is invalid, the output displays "Invalid choice".
// The output will be displayed on a new line.

#include<bits/stdc++.h>
using namespace std;
void calculateTotalPrice(double price){
    cout<<"Total Price: "<<fixed<<setprecision(2)<<price<<endl;
}
void calculateTotalPrice(double price,int q){
    cout<<"Total Price: "<<fixed<<setprecision(2)<<price*q<<endl;
}
void calculateTotalPrice(double p,int q,double d){
    double z=p*q;
    double dist=(1-0.01*d)*z;
    cout<<"Total Price: "<<fixed<<setprecision(2)<<dist<<endl;
}
int main(){
    int n;
    double p;
    double d;
    int q;   
    for(;;){
        cin>>n;
        if(n==1){
            cin>>p;
            calculateTotalPrice(p);
        }else if(n==2){
            cin>>p>>q;
            calculateTotalPrice(p,q);
        }else if(n==3){
            cin>>p>>q>>d;
            calculateTotalPrice(p,q,d);
        }else if(n==4){
            break;
        }else{
            cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}