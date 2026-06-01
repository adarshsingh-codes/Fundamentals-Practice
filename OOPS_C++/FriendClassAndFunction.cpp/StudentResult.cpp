#include<bits/stdc++.h>
using namespace std;
class Sports;
class Academic{
    private:
    int maths;
    int phy;
    int chem;
    public:
    Academic(int m,int p,int c){
        maths=m;
        phy=p;
        chem=c;
    }
    friend void Calc(Academic c,Sports s);
};
class Sports{
    private:
    int score;
    public:
    Sports(int s){
        score=s;
    }
    friend void Calc(Academic a,Sports s);
};
void Calc(Academic a,Sports s){
    int total=a.maths+a.phy+a.chem+s.score;
    double percentage=(double)(total/400.0)*100.0;
    cout<<"Total marks: "<<total<<endl;
    cout<<"Percentage: "<<fixed<<setprecision(2)<<percentage<<endl;
    if(percentage>90){
        cout<<"Grade: A"<<endl;
    }   
    else if(percentage>80){
        cout<<"Grade B"<<endl;
    }
    else if(percentage>70){
        cout<<"Grade C"<<endl;
    }
    else if(percentage>60){
        cout<<"Grade D"<<endl;
    }else{
        cout<<"Grade F"<<endl;
    }
}
int main(){
    int m,p,c;
    cin>>m>>p>>c;
    int s;
    cin>>s;
    Academic a(m,p,c);
    Sports se(s);
    Calc(a,se);
    return 0;
}