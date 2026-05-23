#include<iostream>
#include<string>  //used for string operations in c++
#include<algorithm> //used for reverse and sort operations
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<"The string length is: "<<s.length()<<endl;
    cout<<"The size of the string is: "<<s.size()<<endl;
    //the above size or length both are same (length==size)
    cout<<"The first charater of the string is: "<<s[0]<<endl;
    s[0]='g';
    cout<<"Changes the first character to: "<<s[0]<<endl;
    string str1="adarsh";
    string str2=" singh";
    cout<<str1+str2<<endl;//str1+str2 gives same output as str1.append(str2)
    str1.append(str2); //but str1+str2 creates a new string and str1.append modifies original string
    cout<<"Appended string is: "<<str1<<endl;
    str2.push_back('a');
   
    cout<<"using str.push_back('a') added a to the last of the current string "<<str2<<endl;
    str2.pop_back();
    cout<<"Using str.pop_back() removes the last character"<<str2<<endl;
    string str="hellofriends";
    cout<<"SUbstirng is : "<<str.substr(1,5)<<endl;
    //now from #include<alogithm> we have reverse and sort
    reverse(str.begin(),str.end());
    cout<<"Reverse is also done by a function: "<<str<<endl;
    sort(str.begin(),str.end());
    cout<<"sorting can also be done here"<<str<<endl;
    //now some more basic
    str1.erase(1,3);
    cout<<"Removes three characters from index 1: "<<str1<<endl;
    str1.insert(3,"singh");
    cout<<"Used to indert at specific index"<<str1<<endl;
    cout<<"FInd the index at which this sbstring occurs: "<<str1.find("ab")<<endl;
    return 0;
}