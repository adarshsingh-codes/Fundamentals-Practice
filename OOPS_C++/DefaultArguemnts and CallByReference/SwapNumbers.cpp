#include<iomanip>
#include<iostream>
using namespace std;
void swapnumbers(int &n1,int &n2){
    int temp=n1;
    n1=n2;
    n2=temp;
}
int main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Before swap"<<endl;
    cout<<"NUM 1: "<<n1<<" and NUM 2: "<<n2<<endl;
    swapnumbers(n1,n2);
    cout<<"After swap"<<endl;
    cout<<"NUM 1: "<<n1<<" and NUM 2: "<<n2<<endl;
    return 0;
}