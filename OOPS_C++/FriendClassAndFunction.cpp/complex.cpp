#include<iostream>
#include<iomanip>
using namespace std;
class Complex{
private:
    int real;
    int im;
    public:
    Complex(int r,int i){
        real=r;
        im=i;
    }
    friend void addComplex(Complex x,Complex y);
};
void addComplex(Complex x,Complex y){
    cout<<"The real part is: "<<x.real+y.real<<endl;
    cout<<"The imaginary part is: "<<x.im+y.im<<endl;
    cout<<"\n";
    cout<<"Afer addition: "<<x.real+y.real<<" + "<<x.im+y.im<<"i"<<endl;
}
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    Complex x(x1,y1);
    Complex y(x2,y2);
    addComplex(x,y);
    return 0;
}