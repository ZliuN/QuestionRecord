#include <stdio.h>
#include <stdlib.h>

void solve(int n, int *A) {
    long long *S = (long long *)malloc((n + 1) * sizeof(long long));
    S[0] = 0;
    for (int i = 1; i <= n; i++) {
        S[i] = S[i - 1] + A[i - 1];
    }

    long long operations = 0;
    for (int i = 1; i <= n; i++) {
        if (S[i] == 0) {
            operations++;
            S[i]++;
        }
        if (i < n && S[i] * S[i + 1] >= 0) {
            operations++;
            S[i + 1] = -S[i];
        }
    }

    printf("%lld\n", operations);
    free(S);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int *A = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        solve(n, A);
        free(A);
    }
    return 0;
}