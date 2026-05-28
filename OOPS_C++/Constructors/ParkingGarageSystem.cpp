#include<bits/stdc++.h>
using namespace std;
class Parking{
public:
    int vehicalnumber;
    int hours;
    double rateperhour;
    Parking(int v,int h,double r){
        vehicalnumber=v;
        hours=h;
        rateperhour=r;
    }
    void caluclatBill(){
        double bill=(double)hours*rateperhour;
        if(bill>500){
            cout<<"Bill: "<<fixed<<setprecision(2)<<bill<<endl;
            cout<<"Extra parking fee applied."<<endl;
        }else{
            cout<<"Bill: "<<fixed<<setprecision(2)<<bill<<endl;
            cout<<"normal billing: "<<endl;
        }
    }
    ~Parking(){
        cout<<"Parking record deleted"<<endl;
    }
};
int main(){
    int num;
    int hours;
    double rate;
    cin>>num;
    cin>>hours;
    cin>>rate;
    Parking p(num,hours,rate);
    p.caluclatBill();
    return 0;
}