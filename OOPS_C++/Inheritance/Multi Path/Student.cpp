// Problem Statement
// Helen wants to create a program for student record management with a class hierarchy. 
// Help her write a program that utilizes hybrid inheritance using the below information.
// A base class: Person holds attributes name and ID. 
// Another base class: Score contains the student's score. 
// Two derived classes: UndergraduateStudent and PostgraduateStudent, inherit from both Person and Score classes, calculate and display the grade and results respectively. 
// For Undergraduate Students, Grade is calculated as:
// If the score is 90 or above, the grade is 'A'.
// If the score is 80 to 89, the grade is 'B'.
// If the score is 70 to 79, the grade is 'C'.
// If the score is 60 to 69, the grade is 'D'.
// If the score is below 60, the grade is 'F'.
// For Postgraduate Students, Result is calculated as:
// If the score is 60 or above, the result is 'Pass'.
// If the score is below 60, the result is 'Fail'.
// Input format :
// The first line of input consists of a string, representing the UG student's name.
// The second line consists of a string, representing the UG student's ID.
// The third line consists of a double value, representing the UG student's score.
// The fourth line consists of a string, representing the PG student's name.
// The fifth line consists of a string, representing the PG student's ID.
// The sixth line consists of a double value, representing the PG student's score.
// Output format :
// The first line of output prints the grade of UG student in the format: "Student [UG Student's Name] with ID [UG Student's ID] received grade [UG Student's Grade]."
// The second line prints the result of the PG student in the format: "Student [PG Student's Name] with ID [PG Student'S ID] [Pass/Fail] the course."

#include<bits/stdc++.h>
using namespace std;
class Person{
protected:
    string name;
    string id;
public:
    Person(string s,string i){
        name=s;
        id=i;
    }
};
class Score{
protected:
    double score;
public:
    Score(double sc){
        score=sc;
    }
};
class UndergraduateStudent:public Person,public Score{
public:
    UndergraduateStudent(string s,string i,double sc):Person(s,i),Score(sc){

    }
    void display(){
        if(score>=90){
            cout<<"Student "<<name<<" with ID "<<id<<" recieved grade A"<<endl;
        }else if(score>=80){
            cout<<"Student "<<name<<" with ID "<<id<<" recieved grade B"<<endl;
        }else if(score>=70){
            cout<<"Student "<<name<<" with ID "<<id<<" recieved grade C"<<endl;
        }else if(score>=60){
            cout<<"Student "<<name<<" with ID "<<id<<" recieved grade D"<<endl;
        }else{
            cout<<"Student "<<name<<" with ID "<<id<<" recieved grade F"<<endl;
        }
    }
};
class PostgaduateStudent:public Person,public Score{
public:
    PostgaduateStudent(string s,string i,double sc):Person(s,i),Score(sc){

    }
    void display(){
        if(score>=60){
            cout<<"Student "<<name<<" with ID "<<id<<" Pass the course."<<endl; 
        }else{
            cout<<"Student "<<name<<" with ID "<<id<<" Fail the course."<<endl; 
        }
    }
};
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    double marks1;
    cin>>marks1;
    cin.ignore();
    string str3,str4;
    getline(cin,str3);
    getline(cin,str4);
    double marks3;
    cin>>marks3;
    UndergraduateStudent u(str1,str2,marks1);
    u.display();
    PostgaduateStudent p(str3,str4,marks3);
    p.display();
    return 0;
}