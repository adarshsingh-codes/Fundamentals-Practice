// Move all 0s to the end while maintaining order of non-zero elements.
// Input:
// 6
// 1 0 2 0 4 3
// Output:
// 1 2 4 3 0 0 

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
    int z=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[z++]=arr[i];
        }
    }
    while(z<n){
        arr[z]=0;
        z++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}