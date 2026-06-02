// Implement a program that utilizes multiple inheritance to assess John's health. 
// Create a class BMI with weight and height as attributes and create a method calculateBMI() to compute the BMI. Create a class BloodPressure with systolic and diastolic pressures as attributes to compute health metrics.
// In the Health class, inherit from both classes BMI and BloodPressure to provide an integrated health assessment. Input John's weight, height, systolic, and diastolic values and determine his health status.
// Check health status based on Body Mass Index (BMI) and blood pressure readings:
// Underweight with Low Blood Pressure: BMI < 18.5 && systolic < 90 && diastolic < 60
// Healthy Weight with Normal Blood Pressure: BMI >= 18.5 and BMI < 24.9 && systolic >= 90 && systolic <= 120 && diastolic >= 60 && diastolic <= 80
// Overweight with High Blood Pressure: BMI >= 25.0 and BMI < 29.9 && systolic > 120 && diastolic > 80
// Health Risk Undefined: Otherwise
// Note: BMI = weight / height2
// Input format :
// The first line of input consists of a double value, representing the individual's weight in kilograms.
// The second consists of a double value, representing the height in meters.
// The third line consists of an integer, representing the systolic blood pressure measurement.
// The fourth line consists of an integer, representing the diastolic blood pressure measurement.
// Output format :
// The first line of output prints the BMI result, rounded off to two decimal places.
// The second line prints the overall health status.

#include<bits/stdc++.h>
using namespace std;
class BMI{
    protected:
    double weight;
    double height;
    public:
    BMI(double w,double h){
        weight=w;
        height=h;
    }
    double calculateBMI(){
        double x=weight/(height*height);
        return x;
    }
};
class BloodPressure{
    protected:
    double sys;
    double dys;
    public:
    BloodPressure(double s,double d){
        sys=s;
        dys=d;
    }
};
class Health: public BMI,public BloodPressure{
public:
Health(double w,double h,double s,double d):BMI(w,h),BloodPressure(s,d){

}
void calc(){
    if(calculateBMI()<18.5&&sys<90&&dys<60){
        cout<<"BMI: "<<calculateBMI()<<endl;
        cout<<"Health Status: Underweight with Low Blood Pressure";
    }else if(calculateBMI()>=18.5&&calculateBMI()<24.9&&sys>=90&&sys<=120&&dys>=60&&dys<=80){
        cout<<"BMI: "<<calculateBMI()<<endl;
        cout<<"Health Status: Healthy weight with normal blood pressure"<<endl;
    }else if(calculateBMI()>=25&&calculateBMI()<29.9&&sys>120&&dys>80){
        cout<<"BMI: "<<calculateBMI()<<endl;
        cout<<"Health Status: Overweight with high blood pressure"<<endl;
    }else{
        cout<<"BMI: "<<calculateBMI()<<endl;
        cout<<"Health Status: Health Risk Undefined"<<endl;
    }
}
};
int main(){
    double w,h,n1,n2;
    cin>>w;
    cin>>h;
    cin>>n1;
    cin>>n2;
    Health j(w,h,n1,n2);
    j.calc();
    return 0;
}