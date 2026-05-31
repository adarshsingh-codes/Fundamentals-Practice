#include<bits/stdc++.h>
using namespace std;
void count(string str){
    int alpha=0;
    int dig=0;
    int special=0;
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(isalpha(ch)){
            alpha++;
        }else if(isdigit(ch)){
            dig++;
        }else{
            special++;
        }
    }
    cout<<"Alphabets: "<<alpha<<endl;
    cout<<"Digit: "<<dig<<endl;
    cout<<"Special Characters: "<<special<<endl;
}
void occurence(string str){
    for(int i=0;str[i]!='\0';i++){
        int found=0;
        for(int k=0;k<i;k++){
            if(str[k]==str[i]){
                found=1;
                break;
            }
        }
        if(found==1){
            continue;
        }
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<"Occurence of "<<str[i]<<" is "<<count<<endl;
    }
}
int main(){
    string str;
    getline(cin,str);
    cout<<"Length: "<<str.length()<<endl;
    count(str);
    occurence(str);
    return 0;
}