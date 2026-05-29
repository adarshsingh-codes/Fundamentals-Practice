#include<bits/stdc++.h>
using namespace std;
class Rectangle{
public:
    double length;
    double breadth;
    static int count;
    Rectangle(){
        count++;
    }
    static void getcount(){
        count++;
    }
    void setDimensions(){
        cin>>length;
        cin>>breadth;
    }
    void getArea(){
        double area=length*breadth;
        cout<<area<<endl;
    }

};
int Rectangle::count=0;
int main(){
    int n;
    cin>>n;
    Rectangle r[n];
    for(int i=0;i<n;i++){
        //Rectangle::getcount();  // manually increase count
        r[i].setDimensions();
    }
    cout<<"Total number of Rectangles: "<<Rectangle::count<<endl;
    for(int i=0;i<n;i++){
        cout<<"Area of Rectange "<<i+1<<" ";
        r[i].getArea();
    }
    return 0;
}