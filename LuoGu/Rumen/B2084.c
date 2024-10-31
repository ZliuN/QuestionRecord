#include <stdio.h>
#include <math.h>

int largerPrime(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", largerPrime(n));
    return 0;
}

int largerPrime(int n) {
    int sqrt_n = (int)sqrt(n);
    for (int i=2;i<=sqrt_n;i++) {
        if(0 == n % i) {
            return n / i;
        }
    }
    return n;
}