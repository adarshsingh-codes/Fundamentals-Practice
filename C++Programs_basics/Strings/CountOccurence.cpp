#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int vowel=0;
    int consonant=0;
    int digit=0;
    int spaces=0;
    int special=0;
    for(int i=0;i<s.length();i++){
        char ch=tolower(s[i]);
        if(isdigit(ch)){
            digit++;
        }
        else if(isspace(ch)){
            spaces++;
        }
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }
        else if(isalpha(ch)){
            consonant++;
        }else{
            special++;
        }
    }
    cout<<"Digits: "<<digit<<endl;
    cout<<"Vowels: "<<vowel<<endl;
    cout<<"Consonant: "<<consonant<<endl;
    cout<<"Spaces: "<<spaces<<endl;
    cout<<"Special: "<<special<<endl;
}