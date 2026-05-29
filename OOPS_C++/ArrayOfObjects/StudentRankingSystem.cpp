#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int rollno;
    string name;
    int marks[5];
    void input(){
        cout<<"Enter roll number: ";
        cin>>rollno;
        cin.ignore();
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter the marks of 5 subjects: ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    int totalmarks(){
        int total=0;
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        return total;
    }
    double avgmarks(){
        double z=(double)totalmarks();
        return z/5;
    }
    void display(){
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Student's name: "<<name<<endl;
        // for(int i=0;i<5;i++){
        //     cout<<"marks of subject "<<i+1<<" is "<<marks[i]<<endl;
        // }
        cout<<"Total: "<<totalmarks()<<endl;
        cout<<"Avg: "<<avgmarks()<<endl; 
    }
};
int main(){
    int n;
    cout<<"Enter number of student: ";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details for student: "<<i+1<<endl;
        s[i].input();
    }
    for(int i=0;i<n;i++){
        cout<<"All details of student "<<i+1<<" is:"<<endl;
        s[i].display();
    }
    int topperindex=0;
    for(int i=1;i<n;i++){
        if(s[topperindex].totalmarks()<s[i].totalmarks()){
            topperindex=i;
        }
    }
    cout<<"Topper Details: "<<endl;
    s[topperindex].display();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].totalmarks()<s[j+1].totalmarks()){
                Student temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Rank "<<i+1<<endl;
        s[i].display();
    }
    cout<<"Student details with avg marks more than 80.0 are: "<<endl;
    for(int i=0;i<n;i++){
        if(s[i].avgmarks()>=80.0){
            s[i].display();
        }
    }
    return 0;
}