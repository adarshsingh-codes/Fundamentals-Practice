//area and perimeter of a rectangle
#include<iomanip>
#include<iostream>
using namespace std;
class Rectangle{
    public:
    double length;
    double breadth;
    
    double area(){
        return length*breadth;
    }
    void perimeter(){
        cout<<"Perimeter is: "<<fixed<<setprecision(2)<<2*(length+breadth)<<endl;
    }
};
int main(){
    Rectangle r;
    cout<<"Enter Length and breadth of the rectangle: ";
    cin>>r.length>>r.breadth;
    double rect_area=r.area();
    cout<<"Area of the Rectangle is: "<<rect_area<<endl;
    r.perimeter();
    return 0;
}