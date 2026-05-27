#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v6(n);
    for(int i=0;i<n;i++){
        cin>>v6[i];
    }
    v6.push_back(10);
    v6.emplace_back(12);//this is faster than push_back
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    cout<<v6.back()<<endl;//gives last elemet

    vector<int> v1(5,10) ;//means five entries of 10 [10,10,10,10,10]
    vector<int> v2(5);//means 5 entries that has either all 0 or has garbage value [0,0,0,0,0]
    v6.pop_back();//this one removes the last element;
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    //to insert an element to a given position
    v6.insert(v6.begin()+2,100);//insert 100 at index 0+2;
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }

    //to erase an element;
    v6.erase(v6.begin()+4);
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    v6.push_back(9);
    v6.push_back(12);
    v6.erase(v6.begin(),v6.begin()+4);//erase a segment 
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    v1.clear();
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<"Returns 1 if empty and 0 is not empty"<<v1.empty()<<endl;
    reverse(v6.begin(),v6.end());
    //reverse the vector;
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    v1.swap(v2);
    //swapped v2 with v1
    sort(v6.begin(),v6.end());
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    cout<<*min_element(v6.begin(),v6.end())<<endl;
    cout<<*max_element(v6.begin(),v6.end());
    

    //elements can be accessed in both ways
    cout<<v6[1]<<endl;
    cout<<v6.at(1)<<endl;

    //iterators
    vector<int>::iterator it1=v6.begin();   
    cout<<*it1;

    vector<int>::iterator it2=v6.end();
    it2--;
    cout<<*it2;

    // //some more which we dont use
    // vector<int>::reverse_iterator it=v6.rend();
    // vector<int>::reverse_iterator it=v6.rbegin();

    for(vector<int>::iterator it=v6.begin();it!=v6.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v6.begin();it!=v6.end();it++){
        cout<<*it<<" ";
    }
    for(auto it:v6){
        cout<<it<<" ";
    }
    //2d

    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> v(rows,vector<int> (cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>v[i][j];
        }
    }
    return 0;
}