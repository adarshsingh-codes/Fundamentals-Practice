#include<bits/stdc++.h>
using namespace std;

template<typename T>
T add(T a,T b){
    return a+b;
}
template<typename T>
T sub(T a,T b){
    return a-b;
}
template <typename T>
T mul(T a,T b){
    return a*b;
}
template <typename T>
T divi(T a,T b){
    if(b!=0){
        return a/b;
    }
    return -1;
}
int main(){
    cout<<add(2,4)<<endl;
    cout<<sub(922.22,98.987)<<endl;
    cout<<mul(3.4,1.7)<<endl;
    cout<<divi(20,5)<<endl;
    return 0;
}