#include<bits/stdc++.h>
using namespace std;
template <typename T>
int searchElement(T arr[],int n,T target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<searchElement(arr,n,target)<<endl;
    char arr2[]={'a','b','c','d'};
    cout<<searchElement(arr2,4,'c')<<endl;
    return 0;
}