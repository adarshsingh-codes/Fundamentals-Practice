#include<iostream>
using namespace std;
//this is to find freq of all the numbers in arrays 
// void findfreq(int n,int arr[]){
//     for(int i=0;i<n;i++){
//         int count=1;
//         int same=0;
//         for(int k=0;k<i;k++){
//             if(arr[i]==arr[k]){
//                 same=1;
//                 break;
//             }
//         }
//         if(same==1){
//             continue;
//         }
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         cout<<"Element "<<arr[i]<<" appears "<<count<<" times"<<endl;
//     }
// }
//for finding a specific
int dhundo(int number,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number;
    cin>>number;
    //findfreq(n,arr);
    int z=dhundo(number,arr,n);
    cout<<"The number "<<number<<" appeares "<<z<<" times"<<endl;
    return 0;
}