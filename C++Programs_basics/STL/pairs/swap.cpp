#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p;
    cin>>p.first;
    cin>>p.second;
    pair<int,int>p2;
    cin>>p2.first;
    cin>>p2.second;
    pair<int,int>p3=p2;
    p2=p;
    p=p3;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}