#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int z=s.length();
    string words="";
    string largest="";
    for(int i=0;i<z;i++){
        if(s[i]==' '||s[i]=='\0'){
            if(words.length()>largest.length()){
                largest=words;
            }
            words="";
        }else{
            words+=s[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}