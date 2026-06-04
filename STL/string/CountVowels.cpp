#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int z=str.length();
    int count=0;
    for(int i=0;i<z;i++){
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
    }
    cout<<"The count of vowels in this string is: "<<count<<endl;
    return 0;
}