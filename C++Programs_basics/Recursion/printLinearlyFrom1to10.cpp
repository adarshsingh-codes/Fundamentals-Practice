#include<iostream>
using namespace std;
// //normal
// void print(int z,int n){
//     if(z>n) return;
//     cout<<z<<" ";
//     print(z+1,n);
// }
//backtracking
void print(int i,int n){
    if(i<1){
        return;
    }
    print(i-1,n);
    cout<<i;
}

int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;
}

