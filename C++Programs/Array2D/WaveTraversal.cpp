#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}