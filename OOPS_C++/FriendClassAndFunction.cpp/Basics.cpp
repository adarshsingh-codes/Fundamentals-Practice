#include<iostream>
#include<iomanip>
using namespace std;
class Rectangle{
private:
    int a;
    int b;
public:
    Rectangle(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void calcarea(Rectangle r);
};
void calcarea(Rectangle r){
    cout<<"Area of Rectangle is: "<<r.a*r.b<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    Rectangle obj(a,b);
    calcarea(obj);
    return 0;

}