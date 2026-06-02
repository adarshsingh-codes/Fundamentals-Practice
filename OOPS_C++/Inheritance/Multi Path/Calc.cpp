// Problem Statement
// Create a class Parent that has a method "add" which prints the addition of two integers. 
// Create a class child1 that is a child class of the Parent class. It has a method "sub" that prints the subtraction of two integers. 
// Create a class child2 that is a child class of the Parent class. It has a method "mul" that prints the multiplication of two integers. 
// Create a class child3 that is a child class of the Parent class. It has a method "div" that prints the division of two integers. 
// Create an object of the child3 class. Then, from this object, call the four methods add, sub, mul, and div inherited from the child1 class and display the results.
// Input format :
// The input consists of two space-separated integers: a and b.
// Output format :
// The first line prints the addition of the given integers.
// The second line prints the subtraction of the given integers.
// The third line prints the multiplication of the given integer.
// The fourth line prints the division of the given integers rounded off to two decimal places.
// Code constraints :

#include<bits/stdc++.h>
using namespace std;
class Parent{
protected:
    double n1;
    double n2;
public:
    Parent(double n,double n3){
        n1=n;
        n2=n3;
    }
    void add(){
        cout<<n1+n2<<endl;
    }
};
class Child1:public Parent{
public:
    Child1(double n,double n3):Parent(n,n3){
        
    }
    void sub(){
        cout<<n1-n2<<endl;
    }
};
class Child2:public Child1{
public:
    Child2(double n,double n3):Child1(n,n3){
        
    }
    void mul(){
        cout<<fixed<<setprecision(2)<<n1*n2<<endl;
    }
};
class child3:public Child2{
public:
    child3(double n,double n3):Child2(n,n3){
        
    }
    void div(){
        if(n2!=0){
            cout<<fixed<<setprecision(2)<<n1/n2<<endl;
        }
    }
};

int main(){
    int n,n2;
    cin>>n>>n2;
    child3 c(n,n2);
    c.add();
    c.sub();
    c.mul();
    c.div();
    return 0;
}