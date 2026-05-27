//to convert all the words have  a capital letter

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int z=s.length();
    if(z>0){
        s[0]=toupper(s[0]);
    }
    for(int i=0;i<z;i++){
        if(s[i]==' '&&s[i+1]!=' '){
            s[i+1]=toupper(s[i+1]);
        }
    }
    cout<<s<<endl;
    return 0;
}


// //AI LOGIC

// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     bool newWord=true;
//     for(int i=0;i<s.length();i++){
//         if(newWord && isalpha(s[i])){
//             s[i]=toupper(s[i]);
//             newWord=false;
//         }
//         else{
//             s[i]=tolower(s[i]);
//         }
//         if(s[i]==' '){
//             newWord=true;
//         }
//     }
//     cout<<s;
//     return 0;
// }