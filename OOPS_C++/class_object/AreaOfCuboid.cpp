//calculate the TSA of a house without a roof
//formula TSA=2*(w*h+w*h+h*l+h*l);

#include<iostream>
#include<iomanip>
using namespace std;
class House{
    public:
    double l;
    double b;
    double h;
    void calc(){
        double z=2*(b*h+b*h+l*h+l*h);
        cout<<fixed<<setprecision(2)<<z<<" sq. units"<<endl;
    }
};
int main(){
    House ho;
    cin>>ho.l;
    cin>>ho.b;
    cin>>ho.h;
    ho.calc();
    return 0;
}