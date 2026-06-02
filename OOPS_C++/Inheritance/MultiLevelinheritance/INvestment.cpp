// Problem Statement
// Mohit wants a financial calculator program for Fixed Deposits and Simple Interest. He needs a program that uses multi-level inheritance. The program should have three classes:
// class Investment - Holds the principal, interest rate, and time period as attributes.
// class FixedDeposit - Derived from the Investment class, calculates the maturity amount using a method called calculateMaturityAmount(). 
// class SimpleInterest - Derived from FixedDeposit class, prints the maturity amount using a method called printFD(). It then computes the simple interest and prints it using a method called calculateSimpleInterest().
// Formulas used:
// Maturity Amount = P * (1 + (R/100)) ^ T where the power value is calculated using pow() function from the math library.
// Simple Interest = P * N * R/100
// where P - principal, R - interest rate, and N - time period in years.
// Input format :
// The first line consists of three double-point numbers separated by a space representing the principal amount, interest rate, and time period in years to calculate Fixed Deposit and Simple Interest.
// Output format :
// The first line displays "Maturity Amount: " followed by a double value which is the calculated Maturity amount rounded to two decimal places.
// The second line displays "Simple Interest: " followed by a double value which is the calculated Simple interest rounded to two decimal places.

#include<bits/stdc++.h>
using namespace std;
class Investment{
protected:
    double principal;
    double rate;
    int time;
public:
    Investment(double p,double r,int t){
        principal=p;
        rate=r;
        time=t;
    }
};
class FixedDeposit:public Investment{
public:
    FixedDeposit(double p,double r,int t):Investment(p,r,t){

    }
    double calculateMaturityAmount(){
        double z=principal*pow((1+rate/100),time);
        return z;
    }
};
class SimpleInterest:public FixedDeposit{
public:
    SimpleInterest(double p,double r,int t):FixedDeposit(p,r,t){

    }
    void printFD(){
        cout<<"Maturity Amount: "<<fixed<<setprecision(2)<<calculateMaturityAmount()<<endl;
    }
    void calculateSimpleInterest(){
        double SI=(principal*time*rate)/100.0;
        cout<<"Simple Interest: "<<fixed<<setprecision(2)<<SI<<endl;
    }
};
int main(){
    double p,r;
    int t;
    cin>>p>>r>>t;
    SimpleInterest s(p,r,t);
    s.printFD();
    s.calculateSimpleInterest();
    return 0;
}