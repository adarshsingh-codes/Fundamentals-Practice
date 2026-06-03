// You are tasked with developing a simple inventory management system for a retail shop called "Dukaan." The shop sells various items, each with a unique item ID and an associated price. Your goal is to create a program that allows the shopkeeper to set prices for items and then display the prices of all the items in the shop.
// To implement this, you have been provided with a base class named Shop, which includes a pure virtual function setPrice to set the price of an item and a function displayPrice to display the prices of all the items in the shop.
// Your task is to create a derived class named ConcreteShop that inherits from the Shop class. The ConcreteShop class should override the setPrice function to store the item IDs and their corresponding prices in two arrays: itemId and itemPrice.
// Input format :
// The first line of input consists of a single integer n, representing the number of items in the shop.
// The next n lines contain two space-separated integers, representing the id and price of each item.
// Output format :
// The output displays n lines, each displaying the price of a product using the following format: "The Price of item with Id <itemId> is <itemPrice>".

// #include<bits/stdc++.h>
// using namespace std;
// class Shop{
// protected:
//     int itemid;
//     double price;
// public:
//     virtual void setPrice(int i,double p)=0;
//     void display(){
//         cout<<"The price of the item with ID"<<itemid<<" is: "<<price<<endl;
//     }
// };
// class ConcreteShop : public Shop{
// public:
//     void setPrice(int i,double p){
//         itemid= i;
//         price= p;
//     }

// };
// int main(){
//     int n;
//     cin>>n;
//     ConcreteShop c[n];
//     int id;
//     double p;
//     for(int i=0;i<n;i++){
//         int id;
//         double p;
//         cin>>id;
//         cin>>p;
//         c[i].setPrice(id,p);
//     }
//     for(int i=0;i<n;i++){
//         c[i].display();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Shop{
public:
    virtual void setPrice(int i, double p) = 0;
    virtual void displayPrice() = 0;
};
class ConcreteShop:public Shop{
private:
    int itemId[100];
    double itemPrice[100];
    int count = 0;
public:
    void setPrice(int i,double p){
        itemId[count]=i;
        itemPrice[count]=p;
        count++;
    }
    void displayPrice(){
        for(int i=0;i<count;i++){
            cout << "The Price of item with Id "<< itemId[i]<< " is "<< itemPrice[i]<< endl;
        }
    }
};
int main(){
    int n;
    cin>>n;
    ConcreteShop shop;
    for(int i=0;i<n;i++){
        int id;
        double price;
        cin>>id>>price;
        shop.setPrice(id,price);
    }
    shop.displayPrice();
    return 0;
}