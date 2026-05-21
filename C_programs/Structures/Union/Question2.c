// Motion Analysis System
// Create a union ObjectProperties with:
// mass
// force
// Take mass and acceleration as input:
// calculate force using:
// F=ma
// F=ma
// print:
// "Constant acceleration" if acceleration > 0
// "Decelerating" if acceleration < 0
// "At rest" if acceleration = 0


#include<stdio.h>
union Force{
    float mass;
    float force;
};
int main(){
    union Force f;
    double a;
    scanf("%f",&f.mass);
    scanf("%f",a);
    f.force=f.mass*a;
    if(f.force>0){
        printf("constant acceleration");
    }else if(f.force<0){
        printf("At rest");
    }else{
        printf("Decelerating");
    }
    return 0;
}