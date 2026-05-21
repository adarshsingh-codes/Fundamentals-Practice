// Employee Salary System
// Create a structure Employee with:
// employee number
// name
// age
// designation
// basic pay
// Take N employees and:
// Calculate:
// DA = 50% of basic pay
// HRA = 20%
// CCA = 10%
// PF = 10%
// Insurance = 15%
// Calculate net pay.
// Display employees whose net salary is greater than or equal to 50000.
// Count employees whose age is less than or equal to 30.

#include<stdio.h>
struct Member{
    int empno;
    char ename[100];
    int age;
    char designation[100];
    int pay;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Member m[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %s %d",&m[i].empno,m[i].ename,&m[i].age,m[i].designation,&m[i].pay);
    }
    float dear=0.0;
    float rent=0.0;
    float citycom=0.0;
    float provident=0.0;
    float insurance=0.0;
    float net=0.0;
    for(int i=0;i<n;i++){
        printf("%s allowance details\n",m[i].ename);
            dear=(float)m[i].pay*0.5;
            rent=(float)m[i].pay*0.2;
            citycom=(float)m[i].pay*0.1;
            provident=(float)m[i].pay*0.1;
            insurance=(float)m[i].pay*0.15;
            net=dear+rent+citycom-provident-insurance;
            printf("%.2f %.2f %.2f %.2f %.2f\n",dear,rent,citycom,provident,insurance);
            printf("Netpay: %.2f\n",net); 
    }
    printf("Employees with net salary >= 50000\n");
    for(int i=0;i<n;i++){
        dear = m[i].pay * 0.5;
        rent = m[i].pay * 0.2;
        citycom = m[i].pay * 0.1;
        provident = m[i].pay * 0.1;
        insurance = m[i].pay * 0.15;
        net = m[i].pay+dear+rent+citycom- provident - insurance;
        if(net >= 50000){
            printf("%d %s %d %s %d\n",
            m[i].empno,
            m[i].ename,
            m[i].age,
            m[i].designation,
            m[i].pay);
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(m[i].age<=30){
            count++;
        }
    }
    printf("Number of employees whose age <=30: %d",count);
    return 0;
}