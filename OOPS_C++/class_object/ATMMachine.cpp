//Good small project
#include<bits/stdc++.h>
using namespace std;
class ATM{
public:
    double balance;
    int pin;
    void deposit(int depo){
        balance+=depo;
    }
    void withdraw(int with){
        if(with>balance){
            cout<<"Low Funds"<<endl;
        }else{
            balance-=with;
        }
    }
    void checkbalance(){
        cout<<"Current balance is: "<<balance<<endl;
    }
    void changePIN(){
        int oldPIN;
        cout<<"Enter old PIN: ";
        cin>>oldPIN;
        if(oldPIN==pin){
            int newPIN;
            cout<<"Enter new PIN: ";
            cin>>newPIN;
            pin=newPIN;
            cout<<"PIN changed successfully"<<endl;
        }
        else{
            cout<<"Incorrect old PIN"<<endl;
        }
    }
};
int main(){
    ATM a;
    cout<<"Enter balance: ";
    cin>>a.balance;
    a.pin=1234;
    int attempt=1;
    int enteredpin;
    while(attempt<=3){
        cout<<"Enter PIN: ";
        cin>>enteredpin;
        if(enteredpin==a.pin){
            cout<<"Valid PIN"<<endl;
            int depo;
            cout<<"Enter deposit amount: ";
            cin>>depo;
            cout<<"Enter withdrawal amount ";
            int with;
            cin>>with;
            a.deposit(depo);
            a.withdraw(with);
            a.checkbalance();
            a.changePIN();
            break;
        }else{
            cout<<"wrongpin"<<endl;
            attempt++;
        }
    }
    if(attempt>3){
        cout<<"Too many incorrect attempts: "<<endl;
    }

    return 0;
}