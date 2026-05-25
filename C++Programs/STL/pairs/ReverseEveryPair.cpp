#include<bits/stdc++.h>
using namespace std;
void rev(pair<int,int> p[],int low,int high){
    int i=low;
    int j=high-1;
    while(i<j){
        pair<int,int> temp=p[i];
        p[i]=p[j];
        p[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    rev(p,0,n);
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}