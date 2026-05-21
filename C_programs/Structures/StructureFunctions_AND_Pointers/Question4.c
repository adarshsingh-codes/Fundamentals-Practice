#include<stdio.h>
#include<math.h>
struct Triangle{
    int a;
    int b;
    int c;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Triangle t[n];
    struct Triangle *ptr=t;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&ptr[i].a,&ptr[i].b,&ptr[i].c);
    }
    for(int i=0;i<n;i++){
        float s=(ptr[i].a+ptr[i].b+ptr[i].c)/2.0;
        float area=sqrt(s*(s-ptr[i].a)*(s-ptr[i].b)*(s-ptr[i].c));
        printf("%.2f\n",area);
    }
    return 0;
}