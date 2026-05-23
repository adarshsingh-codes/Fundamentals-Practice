#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int brr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            brr[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int low=0;
    int high=c-1;
    for(int i=0;i<r;i++){
        int low=0;
        int high=c-1;
        while(high>low){
            int temp=brr[i][low];
            brr[i][low]=brr[i][high];
            brr[i][high]=temp;
            low++;
            high--;
        }
    }
    cout<<"90 degree rotation: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
