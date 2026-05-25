#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    vector<vector<int>> v(r,vector<int> (c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=v[i][j];
        }
        cout<<"Row "<<i<<" has the sum "<<sum<<endl;
    }
}