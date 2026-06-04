#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string prefix="";
    for(int i=0;i<v[0].length;i++){
        char ch=v[0][i];
        bool match=false;
        for(int j=1;j<n;j++){
            if(v[j][i]!=ch){
                match=false;
                break;
            }
        }
        if(match){
            prefix+=ch;
        }else{
            break;
        }
    }
    cout<<prefix<<endl;
    return 0;
}