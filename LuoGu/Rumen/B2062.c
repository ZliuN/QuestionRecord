#include<stdio.h>
#include<math.h>
int main(){
    int a, n;
    long long result;
    scanf("%d %d", &a, &n);
    result = pow(a, n);
    printf("%lld", result);
}