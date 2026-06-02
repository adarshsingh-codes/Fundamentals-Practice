// Ajay is assigned with designing a program with an ElectricityBill class that utilizes multiple inheritance, inheriting attributes from Consumption, Rate, and ConnectionType classes. This program calculates the total cost of electricity consumption based on consumed units and connection type, which can be either residential or commercial, each with its respective rate.
// Note: Total Electricity Consumption Cost = Units * rate where units can be residential or commercial.
// Input format :
// The first line of input consists of a double value, representing the total electricity units consumed.
// The second line consists of a double value, representing the rate per unit for residential connections.
// The third line consists of a double value, representing the rate per unit for commercial connections.
// The fourth line consists of a string, representing the Connection type (residential or commercial).
// Output format :
// The output displays the total electricity cost rounded to two decimal places.
// Based on the connection type, the total cost is calculated by multiplying it with respective units.

#include<bits/stdc++.h>
using namespace std;
class Consumption{
protected:
    double consume;
public:
    Consumption(double c){
        consume=c;
    }
};
class Rate{
protected:
    double res;
    double com;
public:
    Rate(double r,double co){
        res=r;
        com=co;
    }
};
class ConnectionType{
protected:
    string s;
    public:
    ConnectionType(string stre){
        s=stre;
    }
};

class ElectricityBill:public Consumption,public Rate,public ConnectionType{
public:
    ElectricityBill(double c,double r,double co,string stre):Consumption(c),Rate(r,co),ConnectionType(stre){

    }
    void calc(){
        if(s=="residential"){
            cout<<fixed<<setprecision(2)<<consume*res<<endl;
        }else{
            cout<<fixed<<setprecision(2)<<consume*com<<endl;
        }
    }
};
int main(){
    double n;
    cin>>n;
    double n1;
    cin>>n1;
    double n2;
    cin>>n2;
    string str;
    cin>>str;
    ElectricityBill e(n,n1,n2,str);
    e.calc();
    return 0;
}