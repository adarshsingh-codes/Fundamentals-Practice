// Input: aaabbcccc
// Output: a3b2c4
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word="";
    for(int i=0;i<s.length();i++){
        int found=0;
        for(int k=0;k<i;k++){
            if(s[i]==s[k]){
                found=1;
                break;
            }
        }
        if(found==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }else{
                break;
            }
        }
        cout<<s[i]<<count;
    }return 0;
}