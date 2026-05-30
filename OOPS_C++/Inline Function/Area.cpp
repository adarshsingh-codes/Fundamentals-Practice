#include<iostream>
#include<iomanip>
using namespace std;
class Area{
private:
    int side,length,breadth;
    float radius,base,height;
public:
    void get(){
        cin>>side;
        cin>>length>>breadth;
        cin>>radius;
        cin>>base>>height;
    }
    inline void squareArea(){
        cout<<"Area of Square: "<<side*side<<endl;
    }
    inline void rectangleArea(){
        cout<<"Area of Rectangle is: "<<length*breadth<<endl;
    }
    inline void circle(){
        cout<<"Area of Circle: "<<fixed<<setprecision(2)<<3.14*radius*radius<<endl;
    }
    inline void parallelogramArea(){
        cout<<"Area of Parallelogram: "<<fixed<<setprecision(2)<<base*height<<endl;
    }
};

int main(){
    Area a;
    a.get();
    a.squareArea();
    a.rectangleArea();
    a.circle();
    a.parallelogramArea();
    return 0;
}