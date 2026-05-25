#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int ,int> p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    int max1=p[0].first*p[0].second;
    pair<int,int>maxele=p[0];
    for(int i=0;i<n;i++){
        int z=p[i].first*p[i].second;
        if(z>max1){
            max1=z;
            maxele=p[i];
        }
    }
    cout<<"Max product is: "<<max1<<endl;
    cout<<"Pair: "<<maxele.first<<" "<<maxele.second<<endl;
    return 0;
}