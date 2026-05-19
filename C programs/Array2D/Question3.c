// Input format :
// The first line of input contains an integer T, the number of test cases.
// For each test case:
// The first line contains an integer N, the dimension of the square matrix.
// The next N lines each contain N integers, representing the population distribution in the region.
// Output format :
// For each test case, print four integers: the sums of the populations in 
// the top-left, top-right, bottom-left, and bottom-right quadrants, respectively.

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        printf("Enter : ");
        scanf("%d",&n);
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){

            }
        }
        int sum1=0,sum2=0,sum3=0,sum4=0;
        int m=n/2;
        for(int j=0;j<m;j++){
            for (int k=0;k<m;k++){
                sum1+=arr[j][k];
            }
        }
        for(int j=0;j<m;j++){
            for (int k=m;k<n;k++){
                sum2+=arr[j][k];
            }
        }
        for(int j=m;j<n;j++){
            for (int k=0;k<m;k++){
                sum3+=arr[j][k];
            }
        }
        for(int j=m;j<n;j++){
            for (int  k=m;k<n;k++){
                sum4+=arr[j][k];
            }
        }
        printf("%d %d %d %d\n",sum1,sum2,sum3,sum4);
    }
    return 0;
}