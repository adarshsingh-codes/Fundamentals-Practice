#include<bits/stdc++.h>
using namespace std;
inline int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"GCD is: "<<gcd(num1,num2)<<endl;
    return 0;
}