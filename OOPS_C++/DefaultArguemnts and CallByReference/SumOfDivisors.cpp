#include<iomanip>
#include<iostream>
using namespace std;
void sumofdivisors(int &n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    cout<<"Sum of divisors: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    sumofdivisors(n);
    return 0;
}