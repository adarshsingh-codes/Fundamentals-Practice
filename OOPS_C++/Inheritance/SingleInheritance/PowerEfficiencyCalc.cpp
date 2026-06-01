// Create a base class P that stores voltage and current and calculates electrical power using:
// Power=Voltage×Current
// Create a derived class PE that stores efficiency and calculates:
// Useful Power = Power × Efficiency
// Wasted Power = Power × (1 − Efficiency)
// Take voltage, current, and efficiency as input and print power, useful power, and wasted power rounded to 1 decimal place.

#include<iomanip>
#include<iostream>
using namespace std;

class Power{
protected:
    double current;
    double voltage;
    public:
    Power(double current,double voltage){
        this->current=current;
        this->voltage=voltage;
    }
    double calcpower(){
        return voltage*current;
    }
};
class PE:public Power{
private:
    double efficiency;
    public:
    PE(double current,double voltage,double efficiency): Power(current,voltage){
        this->efficiency=efficiency;
    }
    double UseFulPower(){
        double z=calcpower();
        return z*efficiency;
    }
    double WastedPower(){
        double z=calcpower();
        return z*(1.0-efficiency);
    }
    void display(){
        cout<<"Power: "<<fixed<<setprecision(1)<<calcpower()<<"W"<<endl;
        cout<<"Useful power: "<<fixed<<setprecision(1)<<UseFulPower()<<"W"<<endl;
        cout<<"Wasted Power: "<<fixed<<setprecision(1)<<WastedPower()<<"W"<<endl;
    }
};
int main(){
    double v,c,e;
    cin>>v>>c>>e;
    PE p(c,v,e);
    p.display();
    return 0;
}