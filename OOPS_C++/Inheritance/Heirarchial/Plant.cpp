// Yashwanth wants a program to streamline his operations by managing plant data, applying discounts, and categorizing plant ratings. Help him with a program using hierarchical inheritance to achieve this.
// You need to implement the following classes. Print the final discounted price for n plants and categorize them based on the ratings.
// class Plant - Manages plant data including count, price per unit, and discount percentage for each plant.
// class Discount - Inherits from Plant, calculates discounted rates for plants based on discount percentage.
// class Nursery - Inherits from Plant, contains rating as an attribute, categorizes plant ratings, and displays the category.
// Categorization of Rating:
// "Average" if the Rating is in the range of 0.1 to 2.5.
// "Excellent" if the Rating is in the range of 2.6 to 5.0.
// Formulas used: Discounted Rate = (1 - (Discount Percentage / 100)) * Price Per Unit
// Input format :
// The input consists of an integer n representing the count of the number of plants, a float value representing the price of each plant, a float value representing the discount percentage, and a float value representing the rating, separated by spaces.
// Output format :
// The first line displays "Final Price: " followed by a float value representing the final price of n plants rounded to two decimal places.
// The second line prints the category of the plants based on rating.
// It prints "Average" if the Rating is in the range of 0.1 to 2.5.
// It prints "Excellent" if the Rating is in the range of 2.6 to 5.0.

#include<bits/stdc++.h>
using namespace std;
class Plant{
protected:
    int count;
    double ppu;
    double discount;
public:
    Plant(int c,double p,double d){
        count=c;
        ppu=p;
        discount=d;
    }
};
class Discount:public Plant{
    public:
        Discount(int c,double p,double d):Plant(c,p,d){

        }
    void calcRates(){
        double r=(double)count*(1-(discount/100.0))*ppu;
        cout<<"Final Price: "<<r<<endl;
    }
};
class Nursery:public Plant{
private:
    double rating;
public:
    Nursery(int c,double p,double d,double r):Plant(c,p,d){
        rating=r;
    }
    void display(){
        if(rating>=0.1&&rating<=2.5){
            cout<<"Average"<<endl;
        }else if(rating>=2.6&&rating<=5){
            cout<<"Excellent"<<endl;
        }
    }
};
int main(){
    int n1;
    cin>>n1;
    double n2;
    cin>>n2;
    double n3;
    cin>>n3;
    double c3;
    cin>>c3;
    Discount d(n1,n2,n3);
    d.calcRates();
    Nursery n(n1,n2,n3,c3);
    n.display();
    return 0;
}