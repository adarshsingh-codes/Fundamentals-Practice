#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    public:
    double balance;
    static double interest;
    void setInterestRate(double rate){
        interest=rate;
    }
    void balan(double bal){
        balance=bal;
    }
    void calcbalance(){
        cout<<fixed<<setprecision(2)<<interest*balance;
    }
};
double BankAccount::interest=0.03;
int main(){
    double rate,bal;
    BankAccount b;
    cin>>rate;
    cin>>bal;
    BankAccount::setInterestRate(rate);
    b.balan();
    b.calcbalance();
    return 0;
}