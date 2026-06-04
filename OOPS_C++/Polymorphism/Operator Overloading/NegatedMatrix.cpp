#include<bits/stdc++.h>
using namespace std;
class Matrix{
private:
    int row;
    int col;
    int arr[10][10];
public:
    void getinput(){
        cin>>row>>col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
    }
    Matrix operator-(){
        Matrix res;
        res.row=row;
        res.col=col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res.arr[i][j]=-arr[i][j];
            }
        }
        return res;
    }
    void display(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Matrix r1;
    r1.getinput();
    Matrix temp=-r1;
    temp.display();
    return 0;
}