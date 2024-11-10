#include <stdio.h>
int main() {
    long long x, n, s = 0;
    scanf("%lld %lld", &x, &n);
    for (long long i = 0; i < n; i++) {
        if (x != 6 && x != 7) {
            s += 250;
        }
        x++;
        if (x > 7) {
            x = 1;
        }
    }

    printf("%lld\n", s);
    return 0;
}