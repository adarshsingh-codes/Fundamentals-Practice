#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                v.erase(v.begin()+j);
                j--;//
            }
        }

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}