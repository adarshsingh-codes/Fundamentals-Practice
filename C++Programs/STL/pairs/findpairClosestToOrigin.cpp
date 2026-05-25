#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    int min=p[0].first*p[0].first+p[0].second*p[0].second;
    pair<int,int>temp=p[0];
    for(int i=0;i<n;i++){
        int z=p[i].first*p[i].first+p[i].second*p[i].second;
        if(min>z){
            min=z;
            temp=p[i];
        }
    }
    cout<<"CLosest to origin: "<<endl;
    cout<<temp.first<<" "<<temp.second<<endl;
}