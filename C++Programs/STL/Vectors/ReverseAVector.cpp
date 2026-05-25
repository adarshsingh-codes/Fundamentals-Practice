#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>&v,int low,int high){
    int i=low;
    int j=high-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    rev(v,0,n);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}