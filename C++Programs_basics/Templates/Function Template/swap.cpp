#include<bits/stdc++.h>
using namespace std;
template <typename T>
void swapvalues(T &a,T &b){
    cout<<"before swap: a ="<<a<<" b = "<<b<<endl;
    T temp=a;
    a=b;
    b=temp;
    cout<<"After swap: a ="<<a<<" b = "<<b<<endl;
}
int main(){
    int x=10;
    int y=20;
    char a='A';
    char b='B';
    double z=53.2;
    double f=345.3;
    swapvalues(x,y);
    swapvalues(a,b);
    swapvalues(z,f);
    return 0;
}