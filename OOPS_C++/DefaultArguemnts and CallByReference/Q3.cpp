#include<bits/stdc++.h>
using namespace std;
double calculateRoomCharges(int n,int n1){
    if(n==1){
        return 100.0*n1;
    }
    else if(n==2){
        return 150.0*n1;
    }else if(n==3){
        return 250.0*n1;
    }
    return -1;
}
double calculateMealExpense(int n2){
    if(n2!=0){
        return 30.0;
    }
    return 0.0;
}
double calcualteServiceCosts(int n3){
    if(n3!=0){
        return 50.0;
    }
    return 0.0;
}
int main(){
    int n;
    cout<<"Enter room type:(1:Standard 2:Deluxe 3:suite) ";
    cin>>n;
    int n1;
    cout<<"Number of nights you want to stay: ";
    cin>>n1;
    int n2;
    cout<<"Include Meals?(1 for Yes and 0 for No): ";
    cin>>n2;
    int n3;
    cout<<"INlcude Service(1 for Yes and 0 for No): ";
    cin>>n3;
    double total=calcualteServiceCosts(n3)+calculateMealExpense(n2)+calculateRoomCharges(n,n1);
    cout<<"Total cost: of stay: "<<total<<endl;
    return 0;

}