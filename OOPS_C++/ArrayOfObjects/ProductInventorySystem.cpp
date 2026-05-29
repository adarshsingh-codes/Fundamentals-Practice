#include<bits/stdc++.h>
using namespace std;
class Product{
public:
    int id;
    string name;
    int quantity;
    int ppu;
    int stockvalue(){
        return quantity*ppu;
    }
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"quantity: "<<quantity<<endl;
        cout<<"ppu: "<<ppu<<endl;
        cout<<"stock value: "<<stockvalue()<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    Product l[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details of prodiuct: "<<i+1<<endl;
        cout<<"Enter product ID: ";
        cin>>l[i].id;
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,l[i].name);
        cout<<"Enter Quantity: ";
        cin>>l[i].quantity;
        cout<<"ENter ppu: ";
        cin>>l[i].ppu;
    }   
    for(int i=0;i<n;i++){
        l[i].display();
    }
    int maxindex=0;
    for(int i=1;i<n;i++){
        if(l[i].stockvalue()>l[maxindex].stockvalue()){
            maxindex=i;
        }
    }
    cout<<"Prodcut with highest stock value: ";
    l[maxindex].display();
    cout<<endl;
    int total=0;
    for(int i=0;i<n;i++){
        total+=l[i].stockvalue();
    }
    cout<<"Total inventory value: "<<total<<endl;
}
