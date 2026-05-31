//find largest in the default size 5
#include<iostream>
using namespace std;
int findmax(int *arr,int n=5){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<findmax(arr,5)<<endl;
    return 0;
}