#include<iostream>
using namespace std;
void print(int n,string str){
    if(n==0) return;
    cout<<str<<endl;
    print(n-1,str);
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string name;
    getline(cin,name);
    cout<<"Printing "<<name<<" "<<n<<" times"<<endl;
    print(n,name);
    return 0;
}