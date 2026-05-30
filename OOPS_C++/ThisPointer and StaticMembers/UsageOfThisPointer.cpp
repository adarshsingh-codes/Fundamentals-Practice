#include<iostream>
using namespace std;
class BankAccount{
public: 
    string accholder;
    double balance;
    BankAccount(){

    }
    BankAccount(string accholder,double balance){
        this->accholder=accholder;
        this->balance=balance;
    }
    void createAccount(){
        getline(cin,accholder);
        cin>>balance;
        cin.ignore();
    }
    BankAccount& deposit(double amount){
        balance+=amount;
        cout<<"Balance Updated Successful."<<endl;
        cout<<"Current Balance "<<balance<<endl;
        return *this;
    }
    BankAccount& withdraw(double amount){
        if(amount>balance){
            cout<<"Low Funds.Can't Withdraw"<<endl;
        }else{
            balance-=amount;
            cout<<"Balance Withdrawal Successful."<<endl;
            cout<<"Remaining Balance: "<<balance<<endl;
        }
          return *this;
    }
    void display(){
        cout<<"Account Holder Name: "<<accholder<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    BankAccount b[n];
    cin.ignore();
    for(int i=0;i<n;i++){
         string name;
        double bal;
        cout<<"\nEnter Account Holder Name: ";
        getline(cin,name);
        cout<<"Enter Initial Balance: ";
        cin>>bal;
        cin.ignore();
        b[i] = BankAccount(name,bal);

    }
    for(int i=0;i<n;i++){
        double amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        b[i].deposit(amount);
    }
    for(int i=0;i<n;i++){
        double amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        b[i].withdraw(amount);
    }
    for(int i=0;i<n;i++){
        b[i].display();
    }
}