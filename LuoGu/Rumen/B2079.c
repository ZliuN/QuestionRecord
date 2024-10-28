#include <stdio.h>

int main() {
    int n;
    double e = 1.0;
    double factorial = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }
    printf("%.10lf", e);
    return 0;
}