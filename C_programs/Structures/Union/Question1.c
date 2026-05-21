// Create a macro KINETIC_ENERGY to calculate kinetic energy using:
// KE=0.5mv^2;
// Take mass and velocity as input and print the kinetic energy.

#include<stdio.h>
union Values{
    float x;
};
int main(){
    union Values u,m,ke;
    scanf("%f",&m.x);
    scanf("%f",&u.x);
    ke.x=0.5*u.x*u.x*m.x;
    printf("%.2f Joules",ke.x);
    return 0;
}