// Problem Statement
// Sharon wants to design a program to analyze experimental results. 
// Create a base class, Experiment, with a pure virtual function analyzeResults(). Implement two derived classes, ChemistryExperiment and PhysicsExperiment, to analyze chemistry and physics experiments, respectively. 
// For the chemistry experiment, calculate the value: Product = Reactant A * Reactant B
// For the physics experiment, calculate the value: Final Velocity = Initial Velocity + (Acceleration * Time)
// Input format :
// The first line of input consists of a character ('C/c' for Chemistry Experiment, 'P/p' for Physics Experiment).
// If Chemistry Experiment is selected, the second line consists of two double-value numbers: reactant A and reactant B.
// If Physics Experiment is selected, the second line consists of three double-value numbers: initial velocity, acceleration, and time.
// Output format :
// For Chemistry Experiment, the output displays a double-value number, rounded off to two decimal places, representing the product of reactant A and reactant B.
// For Physics Experiment, the output displays a double-value number, rounded off to two decimal places, representing the final velocity followed by " m/s".
#include<bits/stdc++.h>
using namespace std;
class Experiment{
public:
    virtual void analyze()=0;
};
class Chem:public Experiment{
protected:
    double recta;
    double rectb;
public:
    Chem(double a,double b):Experiment(){
        recta=a;
        rectb=b;
    }
    void analyze(){
        cout<<fixed<<setprecision(2)<<recta*rectb<<endl;
    }
};

class Phy:public Experiment{
protected:
    double vel;
    double acc;
    double tem;
public:
    Phy(double v,double a,double t):Experiment(){
        vel=v;
        acc=a;
        tem=t;
    }
    void analyze(){
        double z=vel+(acc*tem);
        cout<<fixed<<setprecision(2)<<z<<endl;
    }
};
int main(){
    char str;
    cin>>str;

    if(str=='c'||str=='C'){
        double r1,r2;
        cin>>r1>>r2;
        Chem c(r1,r2);
        c.analyze();
    }
    else if(str=='p'||str=='P'){
        double v,a,t;
        cin>>v>>a>>t;
        Phy p(v,a,t);
        p.analyze();
    }else{
        cout<<"invalid input"<<endl;
    }
    return 0;
}