#include<bits/stdc++.h>
using namespace std;
class Matrix{
private:
    int c;
    int r;
    vector<vector<int>> arr;
    public:
    Matrix(int r,int c,vector<vector<int>> arr){
        this->r=r;
        this->c=c;
        this->arr=arr;
    }
    
    friend void MulitplyMatrix(Matrix x,Matrix y);
    //friend Matrix MultiplyMatrix(Matrix x, Matrix y);
};
//Matrix MultiplyMatrix(Matrix x, Matrix y)
void MulitplyMatrix(Matrix x,Matrix y){
    if(x.c!=y.r){
        cout<<"Matrix multiplication not possible: "<<endl;
        return;
        //vector<vector<int>> dummy(1, vector<int>(1, 0));
        //return Matrix(1, 1, dummy);
    }
    vector<vector<int>> res(x.r,vector<int>(y.c,0));
    for(int i=0;i<x.r;i++){
        for(int j=0;j<y.c;j++){
            for(int k=0;k<x.c;k++){
                res[i][j]+=x.arr[i][k]*y.arr[k][j];
            }
        }
    }
    //  Matrix result(x.r, y.c, res);
    //return result;
    cout<<"resultant matrix: "<<endl;
    for(int i=0;i<x.r;i++){
        for(int j=0;j<y.c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r1,c1;
    cin>>r1>>c1;
    vector<vector<int>> arr1(r1,vector<int>(c1));
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
    vector<vector<int>> arr2(r2,vector<int>(c2));
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    Matrix x(r1,c1,arr1);
    Matrix y(r2,c2,arr2);
    MulitplyMatrix(x,y);
    //  Matrix result = MultiplyMatrix(x, y);

    // cout << "Resultant Matrix:" << endl;
    // result.display();
    return 0;
}