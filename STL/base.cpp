#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int> p2;
    cin>>p2.first;
    cin>>p2.second;
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<int,pair<int,int>> p3={1,{2,3}};
    cout<<p3.first<<" "<<p3.second.first<<"-"<<p3.second.second<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{4,6}};
    cout<<arr[1].second<<endl;
    cout<<arr[0].first<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" ";
        cout<<arr[i].second;
    }
    return 0;
}