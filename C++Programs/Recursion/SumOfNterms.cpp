#include<iostream>
using namespace std;
int summation(int n){
    if(n==0) return 0;
    return n+summation(n-1);
}
void sumation(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumation(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    int z=summation(n);
    cout<<z;
    return 0;
}