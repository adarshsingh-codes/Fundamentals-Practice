#include<bits/stdc++.h>
using namespace std;

//if internal array max size is 10^6
//if gloabl array then max size is 10^7


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precomputation
    // int max=0;
    // for(int i=0;i<n;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    //int hash[max+1]={0};
    int hash[1000000]={0};
    for(int i=0;i<n;i++){
        hashh[arr[i]]++;
    }

    int testcases;
    cin>>testcases;
    while(testcases--){
        int numbertofind;
        cin>>numbertofind;
        //fetch
        cout<<hashh[numbertofind]<<endl;
    }
}