#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cout<<"Enter the target element: ";
    cin>>k;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            count++;
        }
    }
    cout<<"Element "<<k<<" appeared "<<count<<" times"<<endl;
}