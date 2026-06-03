// Problem Statement
// Create a function 'add'. The function add should perform the following operation.
// The first argument should be the data type of the remaining arguments (str or int) (inp_type)
// It should be able to get any number of arguments (inp1, inp2, inp3,....)
// if the data type is 'str', it should perform string concatenation.
// if the data type is 'int', it should perform an addition.
// In the main program, get the user input as below:
// inp_type -> type of input
// inp1 -> arg1
// inp2 -> arg2
// inp3 -> arg3
// Execute the below statements:
// add(inp_type,inp1)
// add(inp_type,inp1,inp2)
// add(inp_type, inp1,inp2,inp3)
// Note: Use the same naming convention as mentioned above.
// Input format :
// The first line of the input consists of the data type of the arguments (int or str) representing inp_type
// The second line of the input consists of input1 representing inp1.
// The third line of the input consists of input2 representing inp2.
// The fourth line of the input consists of input3 representing inp3.
// Output format :
// The output displays the string concatenation or integer addition.


#include<bits/stdc++.h>
using namespace std;
void add(string int_type,string inp1){
    cout<<inp1<<endl;
}
void add(string inp_type,string i1,string i2){
    if(inp_type=="str"){
        cout<<i1+i2<<endl;
    }else{
        cout<<stoi(i1)+stoi(i2)<<endl;
    }
}
void add(string inp,string i1,string i2,string i3){
    if(inp=="int"){
        cout<<stoi(i1)+stoi(i2)+stoi(i3)<<endl;
        
    }else{
        cout<<i1+i2+i3<<endl;
    }
}
int main(){
    string tr;
    cin>>tr;
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    add(tr,s1);
    add(tr,s1,s2);
    add(tr,s1,s2,s3);
    return 0;
}