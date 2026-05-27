#include<iostream>
#include<iomanip>
using namespace std;
class Calculator{
    public:
    int option;
public:
    void add(int a,int b){
        cout<<"Addition: "<<a+b<<endl;
    }
    void subtract(int a,int b){
        cout<<"Subtraction "<<a-b<<endl;
    }
    void multiply(int a,int b){
        cout<<"Multiplication: "<<a*b<<endl;
    }
    void divide(int a,int b){
        cout<<"Division: "<<(double)a/b<<endl;
    }
};
int main(){
    Calculator c;
    cout<<"Enter what to do: (1->Addition 2->Subtraction 3->Multiplication 4->Division)";
    cin>>c.option;
    int num1,num2;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    switch(c.option){
        case 1:
            c.add(num1,num2);
        break;
        case 2:
            c.subtract(num1,num2);
            break;
        case 3:
            c.multiply(num1,num2);
            break;
        case 4:
            if(num2==0){
                cout<<"Not possible division"<<endl;
            }else{
                c.divide(num1,num2);
            }
            break;
        default:
            cout<<"choose valid: "<<endl;
            break;
    }
    return 0;
}