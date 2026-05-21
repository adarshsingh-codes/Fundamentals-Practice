// Short Version of the Question
// Waterfall Analysis System
// Create:
// a structure Waterfall with width, height, and depth
// a nested structure TotalFlow containing Waterfall
// Take waterfall dimensions and:
// Calculate total volume
// Calculate surface area
// Formulae:
// Volume = width × height × depth
// Surface Area = 2 × (wh + wd + hd)

#include<stdio.h>
struct Waterfall{
    float width;
    float height;
    float depth;
};
struct TotalFlow{
    struct Waterfall w;
};
int main(){
    struct TotalFlow t;
    float w,h,d;
    scanf("%f %f %f",&t.w.width,&t.w.height,&t.w.depth);
    float vol=t.w.height*t.w.depth*t.w.width;
    float surface_area=2*(t.w.width*t.w.height+t.w.depth*t.w.width+t.w.depth*t.w.height);
    printf("Volume: %.2f cubic meters\nSurface Area: %.2f square meters\n",vol,surface_area);
    return 0;
}