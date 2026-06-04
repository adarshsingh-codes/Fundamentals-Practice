#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Adarsh";
    string str;
    getline(cin,str);
    
    cout<<s[0]<<endl;
    cout<<s[4]<<endl;
    
    cout<<s.length()<<endl;
    cout<<str.size()<<endl;
    
    cout<<str.push_back('ss');
    cout<<s.pop_back();

    cout<<s.substr(0,s.length());
    
    string s1="Programming";
    cout<<s1.find("gram")<<endl;  
    cout<<s1.find("abd")<<endl;   //if it is not found in the string then it returns string::npos;

    s1.erase(3,5);
    cout<<s1<<endl;

    reverse(s1.begin(),s1.end());
    cout<<s<<endl;
    
    return 0;
}