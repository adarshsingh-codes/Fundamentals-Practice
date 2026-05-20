// // pattern 1
// //    *
// //   ***
// //  *****
// // *******
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
//         }
//          for(int j=0;j<2*i+1;j++){
//             printf("*");
//          }
//         for(int j=0;j<n-i-1;j++){
//             printf(" ");
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
// //  *******
// //   *****
// //    ***
// //     *
// #include<stdio.h>
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             printf(" ");
//         }
//          for(int j=0;j<2*(n-i)-1;j++){
//             printf("*");
//          }
//         for(int j=0;j<i;j++){
//             printf(" ");
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


// pattern 2
//     *
//    ***
//   *****
//  *******
//  *******
//   *****
//    ***
//     *
#include<stdio.h>
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
         for(int j=0;j<2*(n-i)-1;j++){
            printf("*");
         }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int t;
    printf("Enter number of testcases : ");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        printf("Pattern size");
        scanf("%d",&n);
        pattern(n);
    }
    return 0;
}