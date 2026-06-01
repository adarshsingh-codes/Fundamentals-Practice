#include<bits/stdc++.h>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int n,int d){
            numerator=n;
            denominator=d;
        }
         void display(){
            cout << numerator << "/" << denominator << endl;
        }
        friend Fraction addMixedFraction(Fraction f1,Fraction f2);
       
};
Fraction addMixedFraction(Fraction f1,Fraction f2){
    int num=(f1.numerator*f2.denominator)+(f1.denominator*f2.numerator);
    int deno=(f1.denominator*f2.denominator);
    int g=__gcd(num,deno);
    num=num/g;
    deno=deno/g;
    Fraction result(num,deno);
    return result;
}
int main(){
    int num1,den1;
    cin>>num1>>den1;
    int num2,den2;
    cin>>num2>>den2;
    Fraction f1(num1,den1);
    Fraction f2(num2,den2);
    Fraction result=addMixedFraction(f1,f2);
    result.display();
    return 0;
}