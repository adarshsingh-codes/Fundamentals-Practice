#include<bits/stdc++.h>
using namespace std;

class HotelRoom{
public:

    string name;
    string type;
    int days;
    int rent;

    HotelRoom(string n,string t,int d,int r){

        name = n;
        type = t;
        days = d;
        rent = r;
    }

    void calculateBill(){

        double originalBill = rent * days;
        double tax = 0;
        double discount = 0;

        if(type == "Deluxe"){
            tax = originalBill * 0.20;
        }
        else if(type == "Suite"){
            tax = originalBill * 0.35;
        }

        double total = originalBill + tax;

        if(days > 5){
            discount = total * 0.10;
        }

        double finalBill = total - discount;

        cout<<"Original Bill: "<<originalBill<<endl;
        cout<<"Tax: "<<tax<<endl;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final Bill: "<<finalBill<<endl;
    }

    void display(){

        cout<<"Customer Name: "<<name<<endl;
        cout<<"Room Type: "<<type<<endl;
        cout<<"Number of Days: "<<days<<endl;
        cout<<"Rent Per Day: "<<rent<<endl;
    }

    ~HotelRoom(){
        cout<<"Booking closed for customer"<<endl;
    }
};

int main(){

    string name,type;
    int days,rent;

    getline(cin,name);

    cin>>type;
    cin>>days;
    cin>>rent;

    HotelRoom e(name,type,days,rent);

    e.display();

    e.calculateBill();

    return 0;
}