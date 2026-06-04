#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int real,img;
public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;

        return temp;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    int n1,n2,n3,n4;
    cin>>n1>>n2;
    cin>>n3>>n4;
    Complex c1(n1,n2);
    Complex c2(n3,n4);

    Complex c3=c1+c2;
    c3.display();
    return 0;
}