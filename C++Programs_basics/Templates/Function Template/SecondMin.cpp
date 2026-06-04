#include<bits/stdc++.h>
using namespace std;
template <typename T>
T secmin(T arr[],int n){
    T min;
    T smin;
     if(arr[0] < arr[1])
    {
        min = arr[0];
        smin = arr[1];
    }
    else
    {
        min = arr[1];
        smin = arr[0];
    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            smin=min;
            min=arr[i];
        }
        else if(min!=arr[i]&&smin>arr[i]){
            smin=arr[i];
        }
    }
    return smin;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<secmin(arr,n)<<endl;
    cout<<secmin(arr2,n)<<endl;
    return 0;
}