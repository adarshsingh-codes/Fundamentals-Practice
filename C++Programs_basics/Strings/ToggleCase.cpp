//toggle case

#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int z=str.length();
    for(int i=0;i<z;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else{
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}