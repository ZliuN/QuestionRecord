#include <stdio.h>
#include <math.h>
// int main(){
//     long long a, b, n, d;
//     scanf("%lld %lld %lld", &a, &b, &n);
//     double c;
//     c = ((double)a / (double)b) * pow(10, n);
//     d = (long long)c % 10;
//     printf("%lld",d);
// }

int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    for (int i =1; i<=n;i++){
        a%=b,a*=10;
    }
    a/=b;
    printf("%d", a);
    return 0;
}