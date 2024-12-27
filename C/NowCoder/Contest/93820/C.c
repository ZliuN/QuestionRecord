#include <stdio.h>
int is_odd(long long n) {
    return n % 2 != 0;
}
int main() {
    int q;
    scanf("%d", &q);
    int result[q];
    for (int i = 0; i < q; i++) {
        long long x, y, n;
        scanf("%lld %lld %lld", &x, &y, &n);
        switch (n % 6) {
            case 1:
                result[i] = is_odd(x);
                break;
            case 2:
                result[i] = is_odd(y);
                break;
            case 3:
                result[i] = is_odd(x + y);
                break;
            case 4:
                result[i] = is_odd(x + 2 * y);
                break;
            case 5:
                result[i] = is_odd(2 * x + 3 * y);
                break;
            case 0:
                result[i] = is_odd(3 * x + 5 * y);
                break;
        }
    }
    
    for (int i = 0; i < q; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}