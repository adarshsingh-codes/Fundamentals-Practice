#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int z1=str.length();
    string str2;
    getline(cin,str2);
    int z2=str.length();
    if(z1!=z2){
        cout<<"not anagram";
        return 0;
    }
    int anag=0;
    for(int i=0;i<z1;i++){
        int count1=0;
        int count2=0;
        for(int j=0;j<z1;j++){
            if(str[i]==str[j]){
                count1++;
            }
            if(str[i]==str2[j]){
                count2++;
            }
        }
        if(count1!=count2){
            anag=1;
            break;
        }
    }
    if(anag==0){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}