#include<iostream>
using namespace std;
// bool check(string str){
//     static int i=0;
//     int n=str.length();
//     if(i>=n/2){
//         return 
//     }
//     if(str[i]!=str[n-i-1]){
//         return false;
//     }
//     i++;
//     check(str);
// }

bool f(string str,int i){
    if(i>=str.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return f(str,i+1);
}
int main(){
    string str;
    getline(cin,str);
    if(check(str)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}