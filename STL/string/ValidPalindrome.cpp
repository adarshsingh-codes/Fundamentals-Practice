#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string str){
    int z=str.length();
    for(int i=0;i<z/2;i++){
        if(str[i]!=str[z-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    int z=str.length();
    string words="";
    for(int i=0;i<z;i++){
        char ch=tolower(str[i]);
        if(isalnum(ch)){
            words+=ch;
        }
    }
    cout<<"WOrds: "<<words<<endl;
    if(checkpalindrome(words)==true){
        cout<<"Yes a valid palindrome"<<endl;
    }else{
        cout<<"no it is not"<<endl;
    }



//     while(i < j)
// {
//     while(i < j && !isalnum(str[i]))
//         i++;

//     while(i < j && !isalnum(str[j]))
//         j--;

//     if(tolower(str[i]) != tolower(str[j]))
//         return false;

//     i++;
//     j--;
// }
    return 0;
}