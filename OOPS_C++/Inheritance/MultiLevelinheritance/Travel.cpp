// Anu is assigned with the task of creating a program to calculate the total daily expense for a solo traveller based on their trip details and budget allocations using the concept of multi-level inheritance.
// Define a class TravelPlan with public attributes days and budget.
// Subclass BudgetTravel inheriting from TravelPlan to calculate the base daily expense.
// Subclass SoloTravel inheriting from BudgetTravel to incorporate lodging and food expenses.
// Implement constructors in each class to initialize the respective data members.
// Calculate and display the total daily expense for the solo traveller.
// Formulas
// Base daily expense = 1.2 * (budget / days)
// Total expense = base expense + lodging expense + food expense
// Input format :
// The first line of input consists of an integer representing the number of days of the trip.
// The second line consists of three space-separated double values, representing the total budget, lodging expenses, and food expenses.
// Output format :
// The output prints "Rs. X" where X is a double value, rounded off to two decimal places.

#include<bits/stdc++.h>
using namespace std;
class Travel{
protected:
    int days;
    double budget;
public:
    Travel(int d,double b){
        days=d;
        budget=b;
    }
};
class BudgetTravel:public Travel{
public:
    BudgetTravel(int d,double b):Travel(d,b){

    }
    double base(){
        double exp=1.2*(budget/(double)days);
        return exp;
    }
};
class SoloTravel:public BudgetTravel{
protected:
double  lodging;
double food;
public:
    SoloTravel(int d,double b,double l,double f):BudgetTravel(d,b){
        lodging=l;
        food=f;
    }
    void total(){
        cout<<"Total expense: Rs. "<<base()+lodging+food<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    double n1,n2,n3;
    cin>>n1>>n2>>n3;
    SoloTravel s(n,n1,n2,n3);
    s.total();
    return 0;
}