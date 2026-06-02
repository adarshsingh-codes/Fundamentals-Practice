// Problem Statement
// Joe is developing a program to compare the estimated ranges of gas and electric cars. He wants to help users make informed decisions about purchasing these vehicles. Help him write a program using multi-level inheritance. 
// The program features three classes: 
// class Vehicle - Holds fuel capacity as an attribute.
// class Car - Derived from class Vehicle, it holds fuel efficiency as an attribute and calculates its range based on fuel capacity and efficiency.
// class ElectricCar - Derived from class Car, it holds battery capacity as an attribute and calculates its range using battery capacity and fuel efficiency. 
// The program calculates the estimated range for both types of cars. 
// Formulas
// Car range = Fuel efficiency * Fuel capacity
// Electric car range = Battery capacity * Fuel efficiency
// Input format :
// The first line of input consists of two space-separated double values, representing the fuel capacity and fuel efficiency of a car.
// The second line consists of two space-separated double values, representing the battery capacity and fuel efficiency of an electric car.
// Output format :
// The first line of output prints "Car Estimated Range: X miles" where X is a double-value, rounded off to one decimal place.
// The second line prints "Electric Car Estimated Range: Y miles" where Y is a double-value, rounded off to one decimal place.

#include<bits/stdc++.h>
using namespace std;
class Vehicle{
protected:
    double fuel;
public:
    Vehicle(double f){
        fuel=f;
    }
};
class Car:public Vehicle{
protected:
    double feff;
public:
    Car(double d,double ef):Vehicle(d){
        feff=ef;
    }
    void range(){
        cout<<"Car Range: "<<fixed<<setprecision(2)<<feff*fuel<<" miles"<<endl;
    }
};
class ElectricCar:public Car{
protected:
    double battery;
public:
    ElectricCar(double f,double ef,double bat,double ee):Car(f,ef){
        battery=bat;
        feff=ee;
    }
    void ecrange(){
        cout<<"Electric car range: "<<fixed<<setprecision(2)<<battery*feff<<" miles"<<endl;
    }
};
int main(){
    double n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    Car c(n1,n2);
    ElectricCar e(n1,n2,n3,n4);
    c.range();
    e.ecrange();
    return 0;
}