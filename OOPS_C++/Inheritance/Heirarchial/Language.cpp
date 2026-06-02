// Problem Statement
// Help Manish write a program using classes to calculate the percentage of English and Spanish speakers and determine whether English or Spanish is the majority language. If either language constitutes 75% or more of the population, it is considered the majority language.
// Classes Used:
// class Language: contains total population as an attribute.
// class English: derived from Language class, contains the number of English speakers and a method to calculate and display the percentage and majority status.
// class Spanish: derived from Language class, contains the number of Spanish speakers and a method to calculate and display the percentage and majority status.
// Input format :
// The input consists of three integers separated by spaces representing the total population, English speakers, and Spanish speakers.
// Output format :
// The first line prints "English Percentage: " followed by a double value, representing the percentage of English speakers rounded to one decimal place.
// The second line prints a statement indicating whether English is the majority language or not.
// If the percentage of English speakers is equal to or greater than 75, the output prints "English is Majority!".
// Otherwise, it prints "English is not Majority!".
// The third line prints "Spanish Percentage: " followed by a double value, representing the percentage of Spanish speakers rounded to one decimal place.
// The fourth line prints a statement indicating whether Spanish is the majority language or not.
// If the percentage of Spanish speakers is equal to or greater than 75, the output prints "Spanish is Majority!".
// Otherwise, it prints "Spanish is not Majority!".

#include<bits/stdc++.h>
using namespace std;
class Language{
protected:
    int population;
public:
    Language(int p){
        population=p;
    }
};
class English:public Language{
private:
    int engspeakers;
    public:
    English(int p,int e):Language(p){
        engspeakers=e;
    }
    void calc(){
        double percentage=((double)engspeakers/(double)population)*100.0;
        cout<<"English Percentage: "<<fixed<<setprecision(1)<<percentage<<"%"<<endl;
        if(percentage>75.0){
            cout<<"English is Majority!"<<endl;
        }else{
            cout<<"English is not Majority!"<<endl;
        }
    }
};
class Spanish:public Language{
private:
    int spaspeakers;
    public:
    Spanish(int p,int s):Language(p){
        spaspeakers=s;
    }
    void calc(){
        double percentage=((double)spaspeakers/(double)population)*100.0;
        cout<<"Spanish Percentage: "<<fixed<<setprecision(1)<<percentage<<"%"<<endl;
        if(percentage>75.0){
            cout<<"Spanish is Majority!"<<endl;
        }else{
            cout<<"Spanish is not Majority!"<<endl;
        }
    }
};

int main(){
    int p,e,s;
    cin>>p>>e>>s;
    English eng(p,e);
    Spanish sp(p,s);
    eng.calc();
    sp.calc();
    return 0;
}