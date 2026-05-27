//input two numbers and solve thier addition subtrciton multiplication etx

#include<iostream>
using namespace std;
class Operation{
public:
    int a;
    int b;
    void calculate(){
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Subtraction: "<<a-b<<endl;
        cout<<"Multiplitcation: "<<a*b<<endl;
        if(b!=0){
            cout<<"Division: "<<(float)a/b<<endl;
            cout<<"Modulus: "<<a%b<<endl;
        }else{
            cout<<"Division by 0 is not possible"<<endl;
        }
        // with #incldue<iomanip
        // cout<<"Division can be : "<<fixed<<setprecision(2)<<(double)a/b;
        //this gives a precised answer
    }
};
int main(){
    Operation o;
    cout<<"Enter the numbers: ";
    cin>>o.a>>o.b;
    o.calculate();
    return 0;
}