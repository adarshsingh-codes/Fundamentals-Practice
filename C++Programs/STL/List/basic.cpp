

//list is a doubly linked list
//dynamic size;
//fast insertion;
//supports front and bakc opertions 
//no random access like vector




#include<bits/stdc++.h>
using namespace std;
int main(){
    //all fucntons same to vectors
    list<int>ls;
    
    int m;
    cin>>m;
    list<int> l2(m);
    ls.push_front(19);
    ls.pop_front();
    ls.merge(l2);
    //merges sorted list
     for(auto x:ls){
        cout<<x<<" ";
    }
     list<int> l2;

    l2.push_back(30);
    l2.push_back(40);
    list<int> l3={1,2,3};
    list<int> l4={4,5,6};
    auto it=l3.begin();
    it++;
    l3.splice(it,l4);
    //moves elementsbetween lists 
    //very powerful linked-list operations
    //not available in vector
}