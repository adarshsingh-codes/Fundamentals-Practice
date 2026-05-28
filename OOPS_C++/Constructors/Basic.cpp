#include<iostream>
using namespace std;
class Demo{
public:
    int num;
    Demo(){
        num = 0;
    }
    Demo(int x){
        num = x;
        cout<<"Created "<<num<<endl;
    }
    ~Demo(){
        cout<<"Destroyed "<<num<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    Demo obj[n];
    for(int i=0;i<n;i++){
        obj[i].num = i+1;
        cout<<"Created "<<obj[i].num<<endl;
    }
    return 0;
}