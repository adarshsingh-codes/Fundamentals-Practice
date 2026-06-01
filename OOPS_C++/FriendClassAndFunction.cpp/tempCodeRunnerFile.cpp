#include<bits/stdc++.h>
using namespace std;
class Employee{
private:
    int id;
    double sal;
public:
    Employee(int id,double sal){
        this->id=id;
        this->sal=sal;
    }
    friend void cacl(Employee e,Bonus b,Tax t); 
};
class Bonus{
private:
    double bon;
public:
    Bonus(double bon){
        this->bon=bon;
    }
    friend void cacl(Employee e,Bonus b,Tax t);
};
class Tax{
    private:
    double taxpercentage;
    public:
    Tax(double taxpercentage){
        this->taxpercentage=taxpercentage;
    }
    friend void cacl(Employee e,Bonus b,Tax t);
};
void cacl(Employee e,Bonus b,Tax t){
    double gross=e.sal+b.bon;
    cout<<"Employee ID: "<<e.id;
    cout<<"Gross Salary: "<<gross<<endl;
    double tax=(gross*t.taxpercentage)/100
    cout<<"Tax Amount: "<<tax<<endl;
    double net=gross-tax;
    cout<<"Net Salary: "<<net<<endl;
}
int main(){
    int id;
    cin>>id;
    double bal
    cin>>bal;
    Employee e(id,bal);
    double ba;
    cin>>ba;
    Bonus b(ba);
    double ax;
    cin>>tax;
    Tax t(ax);
    cacl(e,b,t);
    return 0;
}