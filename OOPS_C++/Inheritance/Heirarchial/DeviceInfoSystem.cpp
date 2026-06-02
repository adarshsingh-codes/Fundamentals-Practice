// Short Form
// Create a base class Device
// brand
// price
// display()
// Create a derived class Television
// screenSize
// calculatePixelDensity()
// Create a derived class Refrigerator
// capacity
// calculateEnergyEfficiency()
// Pixel Density
// Screen Size (cm) = Screen Size (inches) × 2.54
// Pixel Density = (Width × Height) / (Screen Size in cm)²
// Energy Efficiency
// Capacity (cubic feet) = Capacity (liters) × 0.0353
// Energy Efficiency = Energy Consumption / Capacity (cubic feet)
// Input TV details, refrigerator details, resolution, and energy consumption.
// Display device details and calculated values.
#include<bits/stdc++.h>
using namespace std;
class Device{
protected:
    string brand;
    double price;
public:
    Device(string s,double p){
        brand=s;
        price=p;
    }
    void display(){
        cout<<"Brand Name: "<<brand<<endl;
        cout<<"Price: "<<fixed<<setprecision(2)<<price<<endl;
    }
};
class Television:public Device{
private:
    double screensize;
public:
    Television(string s,double p,double ss):Device(s,p){
        screensize=ss;
    }
    void calculatePixelDensity(double width,double height){
        double cm=screensize*2.54;
        double pixel=(width*height)/(cm*cm);
        cout<<"Screen size: "<<screensize<<" inches([" << cm <<"]cm)"<<endl;
        cout<<"Pixel Density: "<<fixed<<setprecision(1)<<pixel<<" pixels per square centimeter"<<endl;
    }
    void finaldisplay(){
        cout<<"Television Information:"<<endl;
        display();
    }
};
class Refrigerator: public Device{
private:
    double capacity;
public:
    Refrigerator(string s,double p,double c): Device(s,p){
        capacity=c;
    }
    void calculateEfficiency(double energy){
        double cubic=capacity*0.0353;
        double ee=energy/cubic;
        cout<<"Capacity: "<<fixed<<setprecision(1)<<capacity<<" liters(["<<cubic<<"]cubic feet)"<<endl;
        cout<<"Energy Efficiency: "<<ee<<" kWh per cubic feet"<<endl;
    }
    void finaldisplay(){
        cout<<"Refrigerator Information:"<<endl;
        display();
    }
};
int main(){
    string name;
    double price,screensize;
    cin>>name>>price>>screensize;
    string refbrand;
    double rprice,capacity;
    cin>>refbrand>>rprice>>capacity;
    double width,height;
    cin>>width>>height;
    double ee;
    cin>>ee;
    Television t(name,price,screensize);
    t.finaldisplay();
    t.calculatePixelDensity(width,height);
    Refrigerator r(refbrand,rprice,capacity);
    r.finaldisplay();
    r.calculateEfficiency(ee);
    return 0;
}