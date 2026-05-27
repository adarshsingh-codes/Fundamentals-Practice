// #include<iostream>
// using namespace std;

// string rev(string str,int low,int high){
//     int i=low;
//     int j=high-1;
//     while(j>i){
//         char temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         j--;
//         i++;
//     }
//     return str;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     int z=s.length();
//     string str2=rev(s,0,z);
//     if(s==str2){
//         cout<<"Yes it is a palindrome";
//     }else{
//         cout<<"IT is not a plaindrome";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int z=str.length();
    int palin=0;
    for(int i=0;i<z;i++){
        if(str[i]!=str[z-i-1]){
            palin=1;
            break;
        }
    }
    if(palin==0){
        cout<<"yes palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}