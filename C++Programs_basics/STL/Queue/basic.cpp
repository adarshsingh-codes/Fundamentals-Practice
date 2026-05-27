#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    //first in first out
    queue<int> q;
    q.push(1); //1
    q.push(3);  //1 3
    q.emplace(4);  // 1 3 4
    q.back()+=5;  // 1 3 9
    cout<<q.back(); //9
    cout<<q.front();  //1
    q.pop(); //3 9
    cout<<q.front();  //3
}