#include<bits/stdc++.h>
using namespace std;

class Matrix{
private:
    int row,col;
    int arr[10][10];
    public:
    void input(){
        cin>>row>>col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
    }
    Matrix operator*(Matrix m){
        Matrix result;
        result.row=row;
        result.col=m.col;
        for(int i=0;i<row;i++){
            for(int j=0;j<m.col;j++){
                result.arr[i][j]=0;
                for(int k=0;k<col;k++){
                    result.arr[i][j]+=arr[i][k]*m.arr[k][j];
                }
            }
        }
        return result;
    }
    Matrix transpose(){
        Matrix m;
        m.row=col;
        m.col=row;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                m.arr[j][i]=arr[i][j];
            }
        }
        return m;
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
    Matrix r2;
    r1.input();
    r2.input();
    Matrix p=r1*r2;
    Matrix trans=r1.transpose();
    p.display();
    trans.display();
    return 0;
}