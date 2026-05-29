#include<bits/stdc++.h>
using namespace std;
class Circle{
public:
    double radius;
    static int circleCount;
    Circle(){
        circleCount++;
    }
    static int getCircleCount(){
        return circleCount;
    }
    void setRadius(){
        cin>>radius;
    }
    double calculateArea(){
        double area=3.14159*radius*radius;
        return area;
    }
    double calcualteCircumference(){
        double c=2*3.14159*radius;
        return c;
    }
    void display(){
        cout<<"Radius: "<<fixed<<setprecision(2)<<radius<<endl;
        cout<<"Circumference: "<<fixed<<setprecision(2)<<calcualteCircumference()<<endl;
        cout<<"Area: "<<fixed<<setprecision(2)<<calculateArea()<<endl;
    }
};
int Circle::circleCount=0;
int main(){
    int n;
    cin>>n;
    Circle c[n];
    for(int i=0;i<n;i++){
        c[i].setRadius();
    }
    cout<<Circle::getCircleCount()<<endl;
    for(int i=0;i<n;i++){
        c[i].display();
    }
    return 0;
}