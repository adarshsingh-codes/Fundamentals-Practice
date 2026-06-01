// Create a base class LibraryItem that stores the due date and return date.
// Create two derived classes: Book and DVD.
// Calculate the number of overdue days by comparing the return date with the due date.
// For Book, the late fine is ₹1 per overdue day.
// For DVD, the late fine is ₹2 per overdue day.
// Display the due date, return date, and calculated late fine for both items.

#include<bits/stdc++.h>
using namespace std;
class LibraryItem{
protected:
    string dueday;
    string returnday;
    public:
    void setdetials(string d,string r){
        dueday=d;
        returnday=r;
    }
    int calculateDays(){
        int due=stoi(dueday.substr(8,2));
        int ret=stoi(returnday.substr(8,2));
        if(due<ret){
            return ret-due;
        }else{
            return 0;
        }
    }
};
class DVD: public LibraryItem{
    public:
    void printfine(){
        cout<<"Due date: "<<dueday<<endl;
        cout<<"Return date: "<<returnday<<endl;
        cout<<"Late Fine: "<<calculateDays()*2<<endl;
    }
};
class Book: public LibraryItem{
public:
    void printfine(){
        cout<<"Due date: "<<dueday<<endl;
        cout<<"Return date: "<<returnday<<endl;
        cout<<"Late Fine: "<<calculateDays()<<endl;
    }
};
int main(){
    Book b;
    string due;
    getline(cin,due);
    string ret;
    getline(cin,ret);
    b.setdetials(due,ret);
    b.printfine();
    DVD d;
    d.setdetials(due,ret);
    d.printfine();
    return 0;
}