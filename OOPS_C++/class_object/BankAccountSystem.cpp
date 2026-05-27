#include<iostream>
#include<iomanip>
using namespace std;
class BankAccount{
public:
    string accountHolder;
    double balance;
    void deposit(double depo){
        balance+=depo;
    }
    void withdraw(double with){
        if(with>balance){
            cout<<"Insufficient balance"<<endl;
        }else{
            balance-=with;
        }
    }
    void displayBalance(){
        cout<<fixed<<setprecision(2)<<"Current balance: "<<balance<<endl;
    }
};
int main(){
    BankAccount b;
    cout<<"Enter bankAccount holder name: ";
    cin>>b.accountHolder;
    cout<<"Enter the balance Available: ";
    cin>>b.balance;
    double deposit_amount,withdraw_amount;
    cout<<"Enter the amount to deposit: ";
    cin>>deposit_amount;
    cout<<"Enter the withdrawal balance:: ";
    cin>>withdraw_amount;
    b.deposit(deposit_amount);
    b.withdraw(withdraw_amount);
    b.displayBalance();
    return 0;
}