#include<iostream>
using namespace std;
class Electricity{
public:
    string name;
    int units;

    void calculateBill(){
        if(units<=100){
            cout<<"Bill: $ "<<5*units<<endl;
        }else if(units<=300){
            int z=100*5+(units-100)*7;
            cout<<"Bill: $"<<z<<endl;
        }else{
            int z=100*5+200*7+(units-300)*10;
            cout<<"Bill: $"<<z<<endl;
        }
    }
};
int main(){
    Electricity e;
    cout<<"Enter customer name: ";
    getline(cin,e.name);
    cout<<"ENter total units: ";
    cin>>e.units;
    e.calculateBill();
    return 0;
}