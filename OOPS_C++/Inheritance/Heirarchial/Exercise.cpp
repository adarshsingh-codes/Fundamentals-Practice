#include<bits/stdc++.h>
using namespace std;
class Exercise{
protected:
    int duration;
    int weight;
public:
    Exercise(int d,int w){
        duration=d;
        weight=w;
    }
    virtual void calculateCaloriesBurned()=0;
};
class Cardio:public Exercise{
private:
    int intensity;
public:
    Cardio(int d,int w,int i):Exercise(d,w){
        intensity=i;
    }
    void calculateCaloriesBurned(){
        int x=(8*intensity*weight)/200;
        cout<<"Total Carlories burned: "<<x*duration<<endl;
    }
};
class Weightlifting:public Exercise{
private:
    int rep;
public:
    Weightlifting(int d,int w,int r):Exercise(d,w){
        rep=r;
    }
    void calculateCaloriesBurned(){
        int x=(5*weight)/100;
        cout<<"Total Carlories burned: "<<x*rep*duration<<endl;
    }
};

class Cycling:public Exercise{
private:
    int speed;
public:
    Cycling(int d,int w,int s):Exercise(d,w){
        speed=s;
    }
    void calculateCaloriesBurned(){
        int x=(10*speed*weight)/500;
        cout<<"Total Carlories burned: "<<x*duration<<endl;
    }
};
int main(){
    int d;
    cin>>d;
    int w;
    cin>>w;
    int et;
    cin>>et;
    if(et==1){
        int i;
        cin>>i;
        Cardio c(d,w,i);
        c.calculateCaloriesBurned();
    }
    else if(et==2){
        int r;
        cin>>r;
        Weightlifting we(d,w,r);
        we.calculateCaloriesBurned();
    }
    else if(et==3){
        int s;
        cin>>s;
        Cycling c(d,w,s);
        c.calculateCaloriesBurned();
    }else{
        cout<<"not valid"<<endl;

    }
    return 0;
}