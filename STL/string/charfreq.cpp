#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int z=str.length();
    for(int i=0;i<z;i++){
        int found=0;
        int count=1;
        for(int k=0;k<i;k++){
            if(str[i]==str[k]){
                found=1;
                break;
            }
        }
        if(found==1){
            continue;
        }
        
        else{
           
            for(int j=i+1;j<z;j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
        }
        cout<<"Character: "<<str[i]<<" appearead "<<count<<" times"<<endl;
    }
    return 0;
}