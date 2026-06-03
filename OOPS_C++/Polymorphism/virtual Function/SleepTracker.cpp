// Problem Statement
// Imagine you are creating a SleepTracker program that demonstrates the use of inheritance and virtual functions. The program helps users analyze their sleep patterns, distinguishing between weekday and weekend sleep durations.
// Implement a base class called SleepTracker with attributes for bedtime and wakeup times and virtual functions for input and duration calculation.
// Derive two subclasses, WeekdaySleep and WeekendSleep, inheriting from SleepTracker. Override the virtual functions for specific behavior on weekdays and weekends.
// Input format :
// The first line consists of four space-separated integers, representing the bedtime hour, minute, wakeup hour, and minute for a weekday.
// The second line consists of four space-separated integers, representing the bedtime hour, minute, wakeup hour, and minute for a weekend.
// Output format :
// The first two lines are in the format "Weekday: Xh Ym" and "Weekend: Xh Ym", where:
// X is the number of hours.
// Y is the number of minutes.
// The third line is a statement comparing the sleep durations:
// If the user slept more on weekdays, it outputs: "User slept more on weekdays."
// If the user slept more on the weekend, it outputs: "User slept more on the weekend."
// If the user slept the same amount on weekdays and the weekend, it outputs: "User slept the same amount on weekdays and the weekend."

#include<bits/stdc++.h>
using namespace std;
class SleepTracker{
protected:
    int bh;
    int bm;
    int wh;
    int wm;
public:
    SleepTracker(int bh,int bm,int wh,int wm){
        this->bh=bh;
        this->bm=bm;
        this->wh=wh;
        this->wm=wm;
    }
    virtual double calc()=0;
};
class WeekDaySleep: public SleepTracker{
public:
 WeekDaySleep(int bh,int bm,int wh,int wm):SleepTracker(bh,bm,wh,wm){

    }
    double calc(){
        double z=bh*60+bm;
        double x=wh*60+wm;
        if(x<z) {
            x+=1440;
        };
        return x-z;
    }
};
class WeekendSleep: public SleepTracker{
    public:
    WeekendSleep(int bh,int bm,int wh,int wm):SleepTracker(bh,bm,wh,wm){
    
    }
    double calc(){
        double z=bh*60+bm;
        double x=wh*60+wm;
        if(x<z) {
            x+=1440;
        };
        return x-z;
    }
};
int main(){
    int bh1,bm1,wh1,wm1;
    cin>>bh1>>bm1>>wh1>>wm1;
    int bh2,bm2,wh2,wm2;
    cin>>bh2>>bm2>>wh2>>wm2;
    WeekDaySleep s(bh1,bm1,wh1,wm1);
    WeekendSleep w(bh2,bm2,wh2,wm2);
    int z=s.calc();
    int h=w.calc();
    cout<<"Weekday: "<<z/60<<"h "<<z%60<<"m"<<endl;
    cout<<"Weekend: "<<h/60<<"h "<<h%60<<"m"<<endl;
    if(z>h){
        cout<<"Slept more on Weekday";
    }else if(h>z){
        cout<<"Slept more on Weekend";
    }
    else{
        cout<<"Slept equal on both days"<<endl;
    }
    return 0;
}