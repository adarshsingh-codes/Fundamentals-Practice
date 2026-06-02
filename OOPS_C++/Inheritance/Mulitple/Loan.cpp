// Problem Statement
// Harry, a recent graduate, is excited about buying his first car and considering a loan. To calculate the total interest paid, he wants to design a class structure using multiple inheritance. 
// Create a class named Loan inheriting from the classes: Principal and InterestRate. This program calculates the total interest paid over the loan period, aiding Harry in understanding the financial implications. 
// Principal class - stores the price as a protected attribute
// InterestRate class - stores interest rate as a protected attribute
// Loan class - calculates total interest
// Note: Total Interest = price * interest rate * years.
// Input format :
// The first line of input consists of a double value, representing the car price.
// The second line consists of a double value, representing the interest rate.
// The third line consists of an integer, representing the loan duration in years.
// Output format :
// The output prints "Total interest paid: Rs.X" where X is the total interest paid over the years, rounded off to two decimal places.

#include<bits/stdc++.h>
using namespace std;
class Principal{
protected:
    double price;
public:
    Principal(double p){
        price=p;
    }
};
class InterestRate{
protected:
    double rate;
public:
    InterestRate(double r){
        rate=r;
    }
};
class Loan:public Principal,public InterestRate{
    protected:
        double time;
public:
    Loan(double p,double r,double t):Principal(p),InterestRate(r){
        time=t;
    }
    void calc(){
        cout<<"Total Interest Paid: Rs."<<fixed<<setprecision(2)<<price*rate*time<<endl;
    }
};
int main(){
    double p,r,t;
    cin>>p;
    cin>>r;
    cin>>t;
    Loan l(p,r,t);
    l.calc();
    return 0;
}