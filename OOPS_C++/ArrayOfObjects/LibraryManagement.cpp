#include<iostream>
using namespace std;
class Library{
public:
    int BookId;
    string title;
    string author;
    int price;
    void input(){
        cout<<"Enter Book ID: ";
        cin>>BookId;
        cin.ignore();
        cout<<"Enter Title: ";
        getline(cin,title);
        cout<<"Enter Author: ";
        getline(cin,author);
        cout<<"Enter Price: ";
        cin>>price;
    }
    void display(){
        cout<<"\nBook ID: "<<BookId<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Library books[n];
    for(int i=0;i<n;i++){
        cout<<"\nBook "<<i+1<<endl;
        books[i].input();
    }
    for(int i=0;i<n;i++){
        books[i].display();
    }
    int searchID;
    cout<<"\nEnter Book ID to search: ";
    cin>>searchID;
    bool found = false;
    for(int i=0;i<n;i++){
        if(books[i].BookId == searchID){
            cout<<"\nBOOK FOUND"<<endl;
            books[i].display();
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Book not found."<<endl;
    }
    int maxIndex = 0;
    for(int i=1;i<n;i++){
        if(books[i].price > books[maxIndex].price){
            maxIndex = i;
        }
    }
    cout<<"\nThe costliest book is: "<<endl;
    books[maxIndex].display();
    return 0;
}