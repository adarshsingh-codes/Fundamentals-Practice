// Create a base class Tenant that stores the tenant's monthly income.
// Create a derived class RentEligibility that calculates the rental amount based on a given rent percentage.
// If the monthly income is ₹15,000 or more, the tenant is eligible for rent.
// Calculate the rent amount using:

// Rent Amount= 100/Rent Percentage×Monthly Income

// Print "Eligible" and the rent amount (rounded to 2 decimal places) if eligible.
// Otherwise, print "Not Eligible".

#include<bits/stdc++.h>
using namespace std;
class Tenant{
protected:
double income;
public:
    Tenant(double income){
        this->income=income;
    }
    double in(){
        return income;
    }
};
class RentEligibility:public Tenant{
private:
    double rentpercentage;
public:
    RentEligibility(double income,double rentpercentage):Tenant(income){
        this->rentpercentage=rentpercentage;
    }
    void calc(){
        if(in()>=15000){
            double rent=(rentpercentage/100)*in();
            cout<<"Eligible"<<endl;
            cout<<"Rent amount: "<<fixed<<setprecision(2)<<rent<<endl;
        }else{
            cout<<"Not Eligible"<<endl;
        }
    }
};
int main(){
    double i,r;
    cin>>i;
    cin>>r;
    RentEligibility re(i,r);
    re.calc();
    return 0;
}