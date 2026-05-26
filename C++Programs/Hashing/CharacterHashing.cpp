#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    //pre computing;
    int hash[256]={0};
   // int hash[26]={0}; //for only lowercase
    for(int i=0;i<str.size();i++){
        //hash[str[i]-'a']++;  lower case only
        hash[s[i]]++;
    }
    int testcases;
    cin>>testcases;
    while(testcases--){
        char ch;
        cin>>ch;
        //fetch;
        cout<<hash[c]<<endl;
    }
    
}