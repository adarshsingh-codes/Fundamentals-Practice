#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int z=str.length();
    int freq[26]={0};
    for(int i=0;i<z;i++){
        char ch=tolower(str[i]);
        freq[ch-'a']++;
    }
    for(int i=0;i<z;i++){
        char ch=tolower(str[i]);
        if(freq[ch-'a']==1){
            cout<<ch<<endl;
            break;
        }
    }
    return 0;
}