// // pattern 1
// // *****
// // *****
// // *****
// // *****
// // *****
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int t;
//     printf("Enter number of testcases : ");
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         int n;
//         printf("Pattern size");
//         scanf("%d",&n);
//         pattern(n);
//     }
//     return 0;
// }



// // pattern 2
// // *
// // **
// // ***
// // ****
// // *****
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int t;
//     printf("Enter number of testcases : ");
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         int n;
//         printf("Pattern size");
//         scanf("%d",&n);
//         pattern(n);
//     }
//     return 0;
// }



// // pattern 3
// // 1
// // 12
// // 123
// // 1234
// // 12345
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d",j+1);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int t;
//     printf("Enter number of testcases : ");
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         int n;
//         printf("Pattern size");
//         scanf("%d",&n);
//         pattern(n);
//     }
//     return 0;
// }

// // pattern 4
// // 1
// // 22
// // 333
// // 4444
// // 55555
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d",i+1);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int t;
//     printf("Enter number of testcases : ");
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         int n;
//         printf("Pattern size");
//         scanf("%d",&n);
//         pattern(n);
//     }
//     return 0;
// }


// // pattern 5
// // *****
// // ****
// // ***
// // **
// //*
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int t;
//     printf("Enter number of testcases : ");
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         int n;
//         printf("Pattern size");
//         scanf("%d",&n);
//         pattern(n);
//     }
//     return 0;
// }


// // pattern 6
// // 12345
// // 1234
// // 123
// // 12
// // 1
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             printf("%d",j+1);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int t;
//     printf("Enter number of testcases : ");
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         int n;
//         printf("Pattern size");
//         scanf("%d",&n);
//         pattern(n);
//     }
//     return 0;
// }

