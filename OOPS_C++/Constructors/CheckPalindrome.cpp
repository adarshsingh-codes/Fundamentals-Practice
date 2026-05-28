#include<bits/stdc++.h>
using namespace std;
class PalindromeChecker{
public:
    string str;
    PalindromeChecker(string s){
        str=s;
    }
    void ispalindrome(){
        int isPalin=0;
        int z=str.length();
        for(int i=0;i<z/2;i++){
            if(str[i]!=str[z-i-1]){
                isPalin=1;
                break;
            }
        }
        if(isPalin==0){
            cout<<"The input string is a palindrome"<<endl;
        }
        else{
            cout<<"The input string is not a palindrome"<<endl;
        }
    }
    ~PalindromeChecker(){
        cout<<"Destructor called. Object destroyed"<<endl;
    }
};
int main(){
    string str;
    getline(cin,str);
    PalindromeChecker p(str);
    p.ispalindrome();
    return 0;

}