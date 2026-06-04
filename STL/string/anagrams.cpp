#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);

    int n=str1.length();
    int z=str2.length();
    // if(z!=n){
    //     cout<<"Not anagram"<<endl;
    //     return 0;
    // }
    // sort(str1.begin(),str1.end());
    // sort(str2.begin(),str2.end());
    // if(str1==str2){
    //     cout<<"Yes they are anagram"<<endl;
    // }else{
    //     cout<<"No they are not"<<endl;
    // }
    int freq[26]={0};
    for(char ch:str1){
        freq[ch-'a']++;
    }
    for(char ch:str2){
        freq[ch-'a']--;
    }
    for(int i=0;i<26;i++){
        if(feeq[i]!=0){
            cout<<"not anagram";
            return 0;
        }
    }
    cout<<"yes anagram"<<endl;
    return 0;
}