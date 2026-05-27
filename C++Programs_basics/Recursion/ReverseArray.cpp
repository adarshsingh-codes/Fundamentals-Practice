#include<iostream>
using namespace std;
void normalreverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
// void Recursive(int arr[],int low,int high){
//     if(high<=low){
//         return;
//     }
//     int temp=arr[low];
//     arr[low]=arr[high];
//     arr[high]=temp;
//     return Recursive(arr,low+1,high-1);
// }
void recursivewithonevariable(int arr[],int n){
    static int i=0;
    if(i>=n/2){
        return;
    }
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    i++;
    return recursivewithonevariable(arr,n);
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recursivewithonevariable(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}