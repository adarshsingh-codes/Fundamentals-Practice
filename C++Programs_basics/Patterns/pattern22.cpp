// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-1-1-i;
            cout<<(n-min(min(top,bottom),min(left,right)));
            // if(i==2*n-2||i==0||j==0||j==2*n-2){
            //     cout<<n;
            // }else if(i==2*n-3||i==1||j==1||j==2*n-3){
            //     cout<<n-1;
            // }else{
            //     cout<<n-3;
            // }
        }
        cout<<"\n";
    }
}