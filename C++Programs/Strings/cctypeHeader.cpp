#include<iostream>
#include<cctype>//character functions
using namespace std;
int main(){
    string str;
    getline(cin,str);
    str[0]=toupper(str[0]);
    cout<<"first chatracters to uppercase: "<<str[0]<<endl;
    for(int i=1;i<str.length();i++){
        str[i]=tolower(str[i]);
        cout<<str[i];
    }
}