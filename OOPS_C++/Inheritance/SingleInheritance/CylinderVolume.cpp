// Create a base class Circle with a protected attribute radius.
// Use a constructor to initialize the radius and provide a method to access it.
// Create a derived class Cylinder that inherits from Circle and adds a private attribute height.
// Implement a volume() function in the Cylinder class.
// Calculate the cylinder's volume using:
// Volume=3.14×r2×h
// Take radius and height as input and print the volume rounded to 2 decimal places.

#include<iomanip>
#include<iostream>
using namespace std;
class Circle{
protected:
    double radius;
public:
    Circle(double r){
        radius=r;
    }
    double getRadius(){
        return radius;
    }
};
class Cylinder:public Circle{
    private:
        double height;
    public:
    Cylinder(double r,double h):Circle(r){
        height=h;
    }
    void volume(){
        double v=3.14*radius*radius*height;
        cout<<fixed<<setprecision(2)<<"Volume: "<<v<<endl;
    }
};
int main(){
  double r,h;
  cin>>r>>h;
  Cylinder c(r,h);
  c.volume();
  return 0;
}