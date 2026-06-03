// Problem Statement
// Teju is working on a unit converter application that can convert lengths from millimetres to centimetres and kilometres. The application uses function overloading to handle the different unit types.
// She wants to implement a UnitConverter class that contains two overloaded functions for conversion:
// double convert(double millimetres) - If the unit type is 1, convert the value to centimetres.
// double convert(int unitType, double value) - If the unit type is 2, convert the value to kilometres.
// Assist Teju in completing the converter application.
// Input format :
// The first line of input consists of an integer unitType (1 or 2) representing the unit type.
// The second line consists of a double value N, representing the value in millimetres to be converted.
// Output format :
// If the unit type is 1, print "X cm" where X is a double value, rounded off to two decimal places.
// If the unit type is 2, print "Y km" where Y is a double value, rounded off to two decimal places.
// If the unit type is not valid, print "Invalid unit type!"
#include<bits/stdc++.h>
using namespace std;
class UnitConverted{
public:
    double mm;
    int unittype;
    double convert(double mm){
        double x=mm/10.0;
        return x;
    }
    double convert(int unittype,double mm){
        double x=mm/1000000.0;
        return x;
    }
};
int main(){
    UnitConverted u;
    cin>>u.unittype;
    cin>>u.mm;
    if(u.unittype==1){
        cout<<fixed<<setprecision(2)<<u.convert(u.mm)<<" cm"<<endl;
    }else if(u.unittype==2){
        cout<<fixed<<setprecision(2)<<u.convert(u.unittype,u.mm)<<" km"<<endl;
    }else{
        cout<<"Invalid input type"<<endl;
    }
    return 0;
}