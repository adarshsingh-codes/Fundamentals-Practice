#include<bits/stdc++.h>
using namespace std;
void bubble(pair<int,int>p[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[j].first>p[j+1].first){
                pair<int,int>temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
            else if((p[j].first==p[j+1].first)&&p[j].second>p[j+1].second){
                pair<int,int> temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of pairs: ";
    cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    bubble(p,n);
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}