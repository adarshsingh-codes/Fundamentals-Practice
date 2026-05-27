#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int z=s.length();
    for(int i=0;i<z;i++){
        if(s[i]==' '){
            continue;
        }
        cout<<s[i];
    }
    return 0;
}