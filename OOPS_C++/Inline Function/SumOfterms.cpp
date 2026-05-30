// Function specifications:
// inline int sumOfSquaresEven - calculates the sum of squares of the first n even numbers
// inline int sumOfSquaresOdd - calculates the sum of squares of the first n odd numbers
// Note: This is a sample question asked in Accenture recruitment.
// Input format :
// The input consists of a positive integer N.
// Output format :
// The first line of output displays the sum of squares of the first N even numbers.
// The second line of output displays the sum of squares of the first N odd numbers.

#include<bits/stdc++.h>
using namespace std;
class Sum{
private:
    int n;
public: 
    Sum(int n){
        this->n=n;
    }
    inline int SumOfSquaresOdd(){
        int sum=0;
        for(int i=1;i<=n;i++){
                sum=sum+(2*i-1)*(2*i-1);
        }
        return sum;
    }
    inline int SumOfSquaresEven(){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=(2*i)*(2*i);
        }
        return sum;
    }
};
int main(){
    int n;
    cin>>n;
    Sum s(n);
    
    cout<<"Even: "<<s.SumOfSquaresEven()<<endl;
    cout<<"Odd: "<< s.SumOfSquaresOdd()<<endl;
    return 0;
}