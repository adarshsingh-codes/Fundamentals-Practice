#include<iostream>
using namespace std;

//new is used to create heap memory and not stack memory
int main(){
    int* ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl;

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    delete(ptr);
    delete[] arr;
    return 0;
}