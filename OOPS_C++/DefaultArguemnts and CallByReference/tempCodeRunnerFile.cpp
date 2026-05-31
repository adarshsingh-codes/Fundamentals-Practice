#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==0){
        //cout<<n;
        return 0;
    }
    if(n==1){
        return 1;
    }
    int a=0;
    int b=1;
    int c=0;
    //cout<<a<<" "<<b<<" "; to print the series
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        //cout<<c<<" ";//to print the series
    }
    c=c%10;
    return c;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}