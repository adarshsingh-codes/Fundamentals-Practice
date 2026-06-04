#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);//ransome
    string str2;
    getline(cin,str2);  //magazine
    int z=str.length();
    int count=0;
    int freq[26]={0};
    for(int i=0;i<z;i++){
        freq[tolower(str[i])-'a']++;
    }
    int z2=str2.length();
    int freq2[26]={0};
    bool possible=true;
    for(int i=0;i<z2;i++){
        freq2[tolower(str2[i])-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq2[i]<freq[i]){
            possible=false;
            break;
        }
    }
    if(possible){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}