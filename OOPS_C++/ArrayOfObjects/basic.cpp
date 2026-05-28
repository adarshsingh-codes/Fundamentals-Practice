#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    int marks;
    // Student(){}
    // Student(string n,int r,int m){
    //     name = n;
    //     roll = r;
    //     marks = m;
    // }
    void calculateGrade(){
        if(marks>=90){
            cout<<"A grade"<<endl;
        }else if(marks>=75){
            cout<<"B grade"<<endl;
        }else if(marks>=50){
            cout<<"C grade"<<endl;
        }else{
            cout<<"F grade"<<endl;
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ROll no: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
//for constructors
// int main(){
//     int n;
//     cin>>n;
//     Student s[n];
//     for(int i=0;i<n;i++){
//         string name;
//         int roll;
//         int marks;
//         cin>>name>>roll>>marks;
//         s[i] = Student(name,roll,marks);
//     }
//     for(int i=0;i<n;i++){
//         s[i].display();
//         s[i].calculateGrade();
//         cout<<endl;
//     }
//     return 0;
// }
int main(){
    int n;
    cin>>n;
    Student s[n];
    string name;
    int roll;
    int marks;
    for(int i=0;i<n;i++){
        cin>>s[i].name;
        cin>>s[i].roll;
        cin>>s[i].marks;
    }
    for(int i=0;i<n;i++){
        s[i].display();
        s[i].calculateGrade();
    }
    return 0;
}