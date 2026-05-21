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
    printf("Volume: %.2f\nSurface Area: %.2f\n",vol,surface_area);
}