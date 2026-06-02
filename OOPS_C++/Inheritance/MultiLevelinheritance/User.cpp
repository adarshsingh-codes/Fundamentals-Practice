// Design a social media system that allows users to create posts, manage followers, and display user profiles. Implement the system using multilevel inheritance with three classes: User, Blogger, and Influencer.
// Define the classes User, Blogger, and Influencer to represent these user types and their functionalities.
// The User class is the base class and represents a generic user. It stores the user's username (username) and name (name). The class provides a function displayProfile to display the user's profile information.
// The Blogger class is derived from the User class and represents a blogger user. It inherits the username and name members from the User class. Additionally, it has an array of strings called posts to store the blogger's posts. The class provides functions createPost to add a new post to the posts array and displayProfile to display the blogger's profile information along with their posts.
// The Influencer class is derived from the Blogger class and represents an influencer user. It inherits the username, name, and posts members from the Blogger class. It also has an additional member followerCount to store the number of followers the influencer has. The class provides a function manageFollowers to update the follower count and overrides the displayProfile function to display the influencer's profile information along with their follower count.
// Input format :
// The first line contains the username (a string) of the influencer.
// The second line contains the name (a string) of the influencer.
// The third line contains an integer numPosts, representing the number of posts created by the influencer.
// The next numPosts lines contain the post content (strings) created by the influencer.
// The last line contains an integer followerCount, representing the number of followers of the influencer.
// Output format :
// The output consists of the influencer's profile details.
// The first line displays "User Profile:".
// The subsequent lines display the influencer's username, name, posts (each post on a new line ), and followerCount.

#include<bits/stdc++.h>
using namespace std;
class User{
    protected:
    string username;
    string name;
public:
    User(string u,string n){
        username=u;
        name=n;
    }
    void displayProfile(){
        cout<<"UserName: "<<username<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class Blogger: public User{
protected:
    vector<string> str;
public:
    Blogger(string u,string n,vector<string> s):User(u,n){
        str=s;
    }
    void createposts(string post){
        str.push_back(post);
    }
    void displayProfile(){
        User::displayProfile();
        cout<<"Posts: "<<endl;
        for(int i=0;i<str.size();i++){
            cout<<str[i]<<endl;
        }
    }
};
class Influencer:public Blogger{
    protected:
    int follower;
    public:
    Influencer(string u,string n,vector<string>s,int f):Blogger(u,n,s){
        follower=f;
    }
    void manageFollowers(){
        cout<<"User Profile: "<<endl;
        Blogger::displayProfile();
        cout<<"Follower Count: "<<follower<<endl;
    }
};
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int n;
    cin>>n;
    cin.ignore();
    vector<string> s(n);
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    int follower;
    cin>>follower;
    Influencer i(str1,str2,s,follower);
    i.manageFollowers();
    return 0;
}