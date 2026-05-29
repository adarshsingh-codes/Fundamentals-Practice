#include<bits/stdc++.h>
using namespace std;
class Movie{
public:
    string name;
    string director;
    float rating;
    void input(){
        
        cout<<"Enter the name of the movie: ";
        getline(cin,name);
        cout<<"Enter the directors name: ";
        getline(cin,director);
        cout<<"Enter your rating: ";
        cin>>rating;
        cin.ignore();
    }
    void display(){
        cout<<"Movie name: "<<name<<endl;
        cout<<"Director name: "<<director<<endl;
        cout<<"Rating: "<<rating<<endl;
    }
    void sortrating(Movie m[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(m[j].rating<m[j+1].rating){
                    Movie temp=m[j];
                    m[j]=m[j+1];
                    m[j+1]=temp;
                }
            }
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of movies: ";
    cin>>n;
    cin.ignore();
    Movie m[n];
    for(int i=0;i<n;i++){
        m[i].input();
    }
    for(int i=0;i<n;i++){
        m[i].display();
    }
    m[0].sortrating(m,n);
    cout<<"top rated movie: "<<endl;
    m[0].display();
    cout<<"Movie with ratings above 8 are: "<<endl;
    for(int i=0;i<n;i++){
        if(m[i].rating>8){
            m[i].display();
            cout<<endl;
        }
    }
    return 0;
}