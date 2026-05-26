#include<bits/stdc++.h>
using namespace std;

bool comp( pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second){
        return true;
    }
    if(p1.second>p2.second)return false;
    //they are same
    if(p1.first>p2.first) return true;
    return false;
}
void explainExtra(){
    sort(a,a+n);//a is first element and n is the size 
    sort(v.begin(),v.end()); ;//for vectors}

    sort(a,a+n,greater<int>); //for descending



    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sort it according to second element
    //if second element is same thn sort
    //it according to the first element but in descending

    sort(a,a+n,comp);
    //{4,1},{2,1},{1,2}
    int num=7;
    int cnt=__builtin_popcount();//returns the number of set bits of a binary number;

    long long num=123456789098765432123456;
    int cnt=__builtin_popcountll();
    
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));


    int main(){

}