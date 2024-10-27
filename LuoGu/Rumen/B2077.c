#include <stdio.h>
#include <math.h>

//解法一
// int main(){
//     long long n;
//     scanf("%lld", &n);
//     for (int i=1;i<=pow(100,n);i++){
//         if (1==n%2&&n!=1){
//             printf("%lld*3+1=%lld\n", n, n*3+1);
//             n = n*3+1;
//         }if (0==n%2){
//             printf("%lld/2=%lld\n", n, n/2);
//             n = n/2;
//         }if (n==1){
//             printf("End");
//             break;
//         }
//     }
// }

//解法二
int main(){
    long long n;
    scanf("%lld", &n);
    while(n>1){
        if (1==n%2){
            printf("%lld*3+1=%lld\n", n, n*3+1);
            n = n*3+1;
        }if (0==n%2){
            printf("%lld/2=%lld\n", n, n/2);
            n = n/2;
        }
    }
    printf("End");
}