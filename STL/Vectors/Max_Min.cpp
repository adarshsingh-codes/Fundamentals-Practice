#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max2=v.at(0);
    int min2=v.at(0);
    for(int i=1;i<v.size();i++){
        if(max2<v[i]){
            max2=v[i];
        }
        if(min2>v[i]){
            min2=v[i];
        }
    }
    cout<<"Max: "<<max2<<endl;
    cout<<"Min: "<<min2<<endl;
    return 0;
}