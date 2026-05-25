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
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        cout<<"\nCharacter: "<<ch<<endl;
        if(isalnum(ch)){
            cout<<"isalnum -> Alphanumeric"<<endl;
        }
        if(isalpha(ch)){
            cout<<"isalpha -> Alphabet"<<endl;
        }
        if(islower(ch)){
            cout<<"islower -> Lowercase"<<endl;
        }
        if(isupper(ch)){
            cout<<"isupper -> Uppercase"<<endl;
        }
        if(isdigit(ch)){
            cout<<"isdigit -> Digit"<<endl;
        }
        if(isxdigit(ch)){
            cout<<"isxdigit -> Hexadecimal Character"<<endl;
        }
        if(iscntrl(ch)){
            cout<<"iscntrl -> Control Character"<<endl;
        }
        if(isgraph(ch)){
            cout<<"isgraph -> Printable Character Except Space"<<endl;
        }
        if(isspace(ch)){
            cout<<"isspace -> Whitespace"<<endl;
        }
        if(isblank(ch)){
            cout<<"isblank -> Blank Space or Tab"<<endl;
        }
        if(isprint(ch)){
            cout<<"isprint -> Printable Character"<<endl;
        }
        if(ispunct(ch)){
            cout<<"ispunct -> Punctuation Character"<<endl;
        }
        cout<<"toupper -> "<<(char)toupper(ch)<<endl;
        cout<<"tolower -> "<<(char)tolower(ch)<<endl;
    }

    return 0;
}