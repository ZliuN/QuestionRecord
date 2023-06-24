#include <stdio.h>
int isPrime(long long x) {
    for(long long i=2;i<x/i;i++) {
        if(x%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long long l,r;
    int count = 0;
    scanf("%lld %lld", &l, &r);
    for(long long i=l;i<=r;i++) {
        if(isPrime(i)==1||i==1||i==2) {
            count++;
        }
    }
    printf("%d", count);
}
