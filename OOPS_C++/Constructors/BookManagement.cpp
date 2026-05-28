// Question 1 — Book Management

// Create a class Book.

// Data Members
// bookName
// author
// price
// Requirements
// Use a parameterized constructor
// Create a function display()

// Create a destructor that prints:

// Book object destroyed
// Sample Output
// Book Name: Atomic Habits
// Author: James Clear
// Price: 500
// Book object destroyed

#include<iostream>
#include<iomanip>
using namespace std;
class Book{
public:
    string name;
    string author;
    double price;

    Book (string n,string auth,double p){
        name=n;
        author=auth;
        price=p;
    }
    void display(){
        cout<<"Book name: "<<name<<endl;
        cout<<"Author name: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
    ~Book(){
        cout<<"Book object destroyed"<<endl;
    }
};
int main(){
    string name,author;
    double price;
    getline(cin,name);
    getline(cin,author);
    cin>>price;
    Book b(name,author,price);
    b.display();
    return 0;
}