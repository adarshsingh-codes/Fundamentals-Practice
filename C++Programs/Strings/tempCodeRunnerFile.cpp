#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n-1;i++){
        bool already=false;
        for(int k=0;k<i;k++){
            if(str[i]==str[k]){
                already=true;
                break;
            }
        }
        if(already)
        {
            continue;
        }
        int count=1;
        char ch=str[i];
        for(int j=i+1;j<n;j++){
            if(ch==str[j]){
                count++;
            }
        }
        cout<<"Char "<<str[i]<<" occured "<<count<<" times"<<endl;
    }
    return 0;
}