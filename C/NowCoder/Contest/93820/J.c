#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_M 2000

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve(int n, int m, int *a) {
    int dp[MAX_M + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = m; j >= a[i]; j--) {
            if (dp[j - a[i]]) {
                dp[j] = 1;
            }
        }
    }

    if (!dp[m]) {
        printf("jiang shi chi diao le ni de nao zi!!!\n");
        return;
    }

    int max_gcd = 0;
    int min_diff = MAX_M;

    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        int min_val = MAX_M;
        int max_val = 0;
        int current_gcd = 0;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += a[j];
                if (sum > m) break;
                if (current_gcd == 0) {
                    current_gcd = a[j];
                } else {
                    current_gcd = gcd(current_gcd, a[j]);
                }
                if (a[j] < min_val) min_val = a[j];
                if (a[j] > max_val) max_val = a[j];
            }
        }

        if (sum == m) {
            if (current_gcd > max_gcd || (current_gcd == max_gcd && (max_val - min_val) < min_diff)) {
                max_gcd = current_gcd;
                min_diff = max_val - min_val;
            }
        }
    }

    printf("%d %d\n", max_gcd, min_diff);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        solve(n, m, a);
        free(a);
    }

    return 0;
}