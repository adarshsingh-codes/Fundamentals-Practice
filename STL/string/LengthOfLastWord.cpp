#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i=str.length()-1;
    int count=0;
    while(i>=0&&str[i]==' '){
        i--;
    }
    for(;i>=0;i--){
        if(str[i]!=' '){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}