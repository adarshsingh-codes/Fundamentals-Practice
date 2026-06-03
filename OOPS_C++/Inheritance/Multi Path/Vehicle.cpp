// Help Sammy create a program to calculate rental costs for a car and a truck based on mileage and fuel consumption. The program defines three classes: 
// Vehicle class - Contains mileage covered and fuel consumed as attributes.
// Car class - Derived from Vehicle class and calculates the total rental cost for the Car using calculateCarCost() method.
// Truck class - Derived from Vehicle class and calculates the total rental cost for the Truck using calculateTruckCost() method.
// Rental class - Derived from Car and Truck class and displays the rental costs for both vehicles using printCosts() method.
// Formulas:
// Car rental cost = 0.1*X + 2.0*Y
// Truck rental cost = 1.5 * (0.1*A + 2.0*B)
// Where X - Mileage covered by the Car; Y - Fuel consumed by the Car; A - Mileage covered by the Truck; B - Fuel consumed by the Truck.
// Refer to the below class diagram:
// Input format :
// The first line consists of a double value representing the mileage covered by the car.
// The second line consists of a double value representing the fuel consumed by the car.
// The third line consists of a double value representing the mileage covered by the truck.
// The fourth line consists of a double value representing the fuel consumed by the truck.
// Output format :
// The first line displays "Total Rental Cost for Car: " followed by the total rental cost for the car.
// The second line displays "Total Rental Cost for Truck: " followed by the total rental cost for the truck.
// The rental costs are double values that are rounded to two decimal places.

#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    protected:
    double mile;
    double fuel;
    public:
    Vehicle(double m,double f){
        mile=m;
        fuel=f;
    }
};
class Car:public Vehicle{
    public:
    Car(double m,double f):Vehicle(m,f){

    }
    double carcost(){
        return (0.1*mile)+2.0*fuel;
    }
};
class Truck:public Vehicle{
    public:
    Truck(double m,double f):Vehicle(m,f){

    }
    double truckcost(){
        return 1.5*((0.1*mile+2.0*fuel));
    }
};
class Rental:public Car,public Truck{
public:
    Rental(double cm,double cf,double mm,double mf):Car(cm,cf),Truck(mm,mf){

    }
    void display(){
        cout<<"Total Rental Cost for Car: "<<fixed<<setprecision(2)<<carcost()<<endl;
        cout<<"Total Rental Cost for Truck: "<<fixed<<setprecision(2)<<truckcost()<<endl;
    }
};
int main(){
    double cm,cf,mm,mf;
    cin>>cm;
    cin>>cf;
    cin>>mm;
    cin>>mf;
    Rental r(cm,cf,mm,mf);
    r.display();
    return 0;
}