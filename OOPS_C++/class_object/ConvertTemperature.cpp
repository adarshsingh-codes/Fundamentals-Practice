//convert celcius to fahrenheit and kelvin

#include<bits/stdc++.h>
using namespace std;
class Convert{
    public:
    double temp;
    void toKelvin(){
        double z=temp+273.15;
        cout<<"The Kelvin temp is: "<<fixed<<setprecision(2)<<z<<endl;
    }
    void toFahrenheit(){
        double z=(9.0/5.0)*(temp) +32;
        cout<<"The Fahrenheit temp is: ";
        cout<<fixed<<setprecision(2)<<z<<endl;
    }
};
int main(){
    Convert c;
    cin>>c.temp;
    c.toKelvin();
    c.toFahrenheit();
    return 0;
}