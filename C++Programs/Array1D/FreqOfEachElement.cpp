#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of thea array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    int count[max1+1];
    for(int i=0;i<=max1;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<max1+1;i++){
        cout<<count[i]<<" ";
    }
}