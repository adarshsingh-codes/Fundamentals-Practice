#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pal=0;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            pal=1;
            break;
        }
    }
    if(pal==0){
        cout<<"It is a palindrome array";
    }else{
        cout<<"It is not a palindrome array";
    }
    return 0;
}