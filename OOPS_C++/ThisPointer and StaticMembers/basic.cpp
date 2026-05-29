#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    static double total;
    static void displaytotalsales(double n){
        total+=n;
    }
};
double Student::total=0;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double amount;
        cin>>amount;
        Student::displaytotalsales(amount);
    }
    cout << fixed << setprecision(2);
    cout << "Total Sales: " << Student::total;
    return 0;
}