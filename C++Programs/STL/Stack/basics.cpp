#include<bits/stdc++.h>
void explain_stack(){

    //based on Last in first out(LIFO)
    //all operations happen in O(1);

    stack<int> st;
    st.push(1); //1
    st.push(2);  // 2 1
    st.push(3);  // 3 2 1
    st.push(3);   //3 3 2 1
    st.emplace(5); // 5 3 3 2 1
    cout<<st.top(); //5
    st.pop(); // 3 3 2 1
    cout<<st.top(); //3
    cout<<st.size();  //4
    cout<<st.empty(); //false
    stack<int>st1,st2;
    st1.swap(st2);
}
using namespace std;
int main(){

}