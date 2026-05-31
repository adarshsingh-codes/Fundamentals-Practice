#include<bits/stdc++.h>
using namespace std;
void display(const string &mssg=""){
    cout<<"Welcome: ";
    if(!mssg.empty()){
        cout<<" "<<mssg<<endl;
    }
}
void displayHello(const string& name=""){
    cout<<"Hello";
    if(!name.empty()){
        cout<<" "<<name<<endl;
    }
}
int main(){
    string name;
    getline(cin,name);
    display(name);
    displayHello(name);
    return 0;
}