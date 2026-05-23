#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0];
    int sec_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            sec_max=max1;
            max1=arr[i];
        }else if(arr[i]!=max1&&arr[i]>sec_max){
            sec_max=arr[i];
        }
    }
    cout<<"The second largest element is: "<<sec_max<<endl;
    return 0;
}
