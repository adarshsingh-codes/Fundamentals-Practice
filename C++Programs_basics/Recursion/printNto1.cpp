#include<iostream>
using namespace std;
void forward(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    forward(n-1);
}
void backtrack(int i,int n){
    if(i>n){
        return;
    }
    backtrack(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    forward(n);
    return 0;
}