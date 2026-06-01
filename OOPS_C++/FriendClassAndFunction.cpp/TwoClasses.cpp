// 1. Bank Account + Loan

// Create two classes:

// BankAccount stores a customer's balance (private).
// Loan stores the customer's loan amount (private).

// Use a friend function to determine the customer's net worth:

// Net Worth = Balance - Loan Amount
#include<iomanip>
#include<iostream>
using namespace std;
class Loan;
class Balance{
private:
    double balance;
public:
    Balance(double b){
        balance=b;
    }
    friend void calc(Balance b,Loan l);
};
class Loan{
    private:
    double loan;
    public:
    Loan(double l){
        loan=l;
    }
    friend void calc(Balance b,Loan l);
};
void calc(Balance b,Loan l){
    cout<<"Net Worth: "<<fixed<<setprecision(2)<<b.balance-l.loan<<endl;
}
int main(){
    int bal,lo;
    cin>>bal>>lo;
    Balance b(bal);
    Loan l(lo);
    calc(b,l);
    return 0;
}