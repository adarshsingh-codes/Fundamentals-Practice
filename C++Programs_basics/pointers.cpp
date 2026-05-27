#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int *ptr=&n;
    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
   
// Function using pointer
void updateValue(int *ptr){
    *ptr = *ptr + 10;
}

int main(){

    // -------------------------------
    // BASIC POINTER
    // -------------------------------

    int x = 20;

    int *ptr = &x;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<ptr<<endl;
    cout<<"Value using pointer: "<<*ptr<<endl;

    // -------------------------------
    // MODIFY USING POINTER
    // -------------------------------

    *ptr = 50;

    cout<<"\nAfter modification:"<<endl;
    cout<<"x = "<<x<<endl;

    // -------------------------------
    // POINTER WITH ARRAY
    // -------------------------------

    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    cout<<"\nArray elements using pointer:"<<endl;

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
    }

    // -------------------------------
    // PASS POINTER TO FUNCTION
    // -------------------------------

    int num = 15;

    updateValue(&num);

    cout<<"\n\nAfter function call:"<<endl;
    cout<<"num = "<<num<<endl;

    // -------------------------------
    // DYNAMIC MEMORY ALLOCATION
    // -------------------------------

    int *dynamicArr = new int[3];

    dynamicArr[0] = 100;
    dynamicArr[1] = 200;
    dynamicArr[2] = 300;

    cout<<"\nDynamic Array:"<<endl;

    for(int i=0;i<3;i++){
        cout<<dynamicArr[i]<<" ";
    }

    // Free memory
    delete[] dynamicArr;

    return 0;
}
}