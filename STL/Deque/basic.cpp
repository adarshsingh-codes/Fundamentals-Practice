#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(2);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    //rest fucntions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
    
}