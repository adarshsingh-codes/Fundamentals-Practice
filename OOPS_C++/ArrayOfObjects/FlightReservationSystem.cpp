#include<iostream>
#include<iomanip>
using namespace std;
class Flight{
public: 
    int flightno;
    string destination;
    int availableseats;

    void input(){
        cout<<"Enter flight number: ";
        cin>>flightno;
        cin.ignore();
        cout<<"Enter destination: ";
        getline(cin,destination);
        cout<<"Enter Available seats: ";
        cin>>availableseats;
    }
    void display(){
        cout<<"Flight Number: "<<flightno<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Available Seats: "<<availableseats<<endl;
    }
    void search(Flight *f,int n,int search){
        bool found=false;
        for(int i=0;i<n;i++){
            if(search==f[i].flightno){
                found=true;
                cout<<"Flight found"<<endl;
                f[i].display();
                break;
            }
        }
        if(found==false){
            cout<<"Flight not found"<<endl;
        }
    }
    void book(int booked){
        if(availableseats>=booked){
            availableseats-=booked;
            cout<<"Booking of "<<booked<<" seats successfull"<<endl;
            cout<<"Now Aviable seats are: "<<availableseats<<endl;
        }else{
            cout<<"Not Enough seats to be booked"<<endl;
        }
    }
    void cancel(int seats){
        availableseats += seats;
        cout<<"Cancellation Successful!"<<endl;
        cout<<"Available Seats: "<<availableseats<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of flight: ";
    cin>>n;
    Flight f[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter Details for Flight "<<i+1<<endl;
        f[i].input();
    }
    for(int i=0;i<n;i++){
        cout<<"Details of flight "<<i+1<<endl;
        f[i].display();
    }
    int choice;

    do{
        cout<<"\nMENU"<<endl;
        cout<<"1.Display All Flights"<<endl;
        cout<<"2.Search Flight"<<endl;
        cout<<"3.Book Seats"<<endl;
        cout<<"4.Cancel Seats"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"\nAll Flights:\n";
                for(int i=0;i<n;i++){
                    f[i].display();
                    cout<<endl;
                }
                break;
            }
            case 2:
            {
                int searchNo;
                bool found=false;
                cout<<"Enter Flight Number: ";
                cin>>searchNo;
                for(int i=0;i<n;i++){
                    if(f[i].flightno==searchNo){
                        cout<<"Flight Found!\n";
                        f[i].display();
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Flight Not Found!"<<endl;
                }
                break;
            }
            case 3:
            {
                int searchNo,seats;
                bool found=false;
                cout<<"Enter Flight Number: ";
                cin>>searchNo;
                for(int i=0;i<n;i++){
                    if(f[i].flightno==searchNo){
                        cout<<"Enter Number of Seats to Book: ";
                        cin>>seats;
                        f[i].book(seats);
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Flight Not Found!"<<endl;
                }
                break;
            }
            case 4:
            {
                int searchNo,seats;
                bool found=false;
                cout<<"Enter Flight Number: ";
                cin>>searchNo;
                for(int i=0;i<n;i++){
                    if(f[i].flightno==searchNo){
                        cout<<"Enter Number of Seats to Cancel: ";
                        cin>>seats;
                        f[i].cancel(seats);
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Flight Not Found!"<<endl;
                }
                break;
            }
            case 5:
            {
                cout<<"Exiting Program..."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid Choice!"<<endl;
            }
        }
    }while(choice!=5);
    return 0;
}