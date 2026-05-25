#include<iostream>
using namespace std;

void rev(string str,int low,int high){
    int i=low;
    int j=high-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
        i++;
    }
    cout<<str<<endl;
}
int main(){
    string s;
    getline(cin,s);
    int z=s.length();
    rev(s,0,z);
    
    return 0;
}