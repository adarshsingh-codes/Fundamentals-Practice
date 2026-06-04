#include<bits/stdc++.h>
using namespace std;
template <typename T>
T maxElement(T arr[],int n){
    T max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
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
    cout<<"Max Element: "<<maxElement(arr,n)<<endl;
    cout<<"Max Element: "<<maxElement(arr2,n)<<endl;
    return 0;
}