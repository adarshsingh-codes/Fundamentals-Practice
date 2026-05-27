//for 10^9,10^10,10^12;
//we use map  or unordermap

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre compute;
    map<int,int> mpp; //for character map<char,int>
    unordered_map<int,int> mpp; //both works the same normal map or unordered map
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}