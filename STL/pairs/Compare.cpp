#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p;
    cin>>p.first;
    cin>>p.second;

    pair<int,int>p2;
    cin>>p2.first;
    cin>>p2.second;

    if(p.first>p2.first||(p.first==p2.first&&p.second>p2.second)){
        cout<<"First pair is greater"<<endl;
    }
    else if(p.first<p2.first||(p.first==p2.first)&&p.second<p2.second){
        cout<<"Second pair is greater"<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }
    return 0;
}