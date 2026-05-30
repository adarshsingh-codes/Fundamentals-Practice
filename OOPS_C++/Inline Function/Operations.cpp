#include<bits/stdc++.h>
using namespace std;
class Operation{
private:
    int n1;
    int n2;
public:
    inline void get(){
        cin>>n1>>n2;
    }
    inline int sum(){
        return n1+n2;
    }
    inline int difference(){
        return n1-n2;
    }
    inline int product(){
        return n1*n2;
    }
    inline int division(){
        if(n2!=0){
            return n1/n2;
        }
        return -1;
    }
    inline int modulus(){
        if(n2!=0){
            return n1%n2;
        }
        return -1;
    }
};
int main(){
    Operation o;
    o.get();
    cout<<"Addition of two numbers: "<<o.sum()<<endl;
    cout<<"Difference of two numbers: "<<o.difference()<<endl;
    cout<<"Product of two numbers: "<<o.product()<<endl;
    cout<<"Division of two numbers: "<<o.division()<<endl;
    cout<<"Modulus of two numbers: "<<o.modulus()<<endl;
    return 0;
}