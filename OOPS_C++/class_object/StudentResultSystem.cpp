#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int marks[3];
    int total(){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=marks[i];
        }
        return sum;
    }
    double average(){
        int sum=total();
        double avg=(double)sum/3;
        return avg;
    }
    void grade(){
        double z=average();
        if(z>=90.0){
            cout<<"A grade"<<endl;
        }else if(z>=75.0){
            cout<<"B grade"<<endl;
        }else if(z>=50.0){
            cout<<"C grade"<<endl;
        }else{
            cout<<"Fail"<<endl;
        }
    }
};
int main(){
    Student s;
    cout<<"Enter students name: ";
    getline(cin,s.name);
    cout<<"Enter marks: ";
    for(int i=0;i<3;i++){
        cin>>s.marks[i];
    }
    int sum=s.total();
    cout<<"Total Marks of 3 subjects is: "<<sum<<endl;
    double avg=s.average();
    cout<<"Average of 3 subjects is: "<<fixed<<setprecision(2)<<avg<<endl;
    s.grade();
    return 0;
}