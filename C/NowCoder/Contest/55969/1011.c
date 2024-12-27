#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_RANGE 1000000

// 使用埃拉托斯特尼筛法标记小范围内的素数
void simpleSieve(int limit, bool is_prime[]) {
    for (int i = 2; i <= limit; i++) {
        is_prime[i] = true;
    }
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

// 使用分段筛法标记大范围内的素数
void segmentedSieve(long long L, long long R) {
    int limit = (int)sqrt(R) + 1;
    bool *is_prime = (bool *)malloc((limit + 1) * sizeof(bool));
    simpleSieve(limit, is_prime);

    bool *is_prime_segment = (bool *)malloc((R - L + 1) * sizeof(bool));
    for (long long i = 0; i <= R - L; i++) {
        is_prime_segment[i] = true;
    }

    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            long long start = (L / i) * i;
            if (start < L) {
                start += i;
            }
            if (start == i) {
                start += i;
            }
            for (long long j = start; j <= R; j += i) {
                is_prime_segment[j - L] = false;
            }
        }
    }

    int count = 0;
    for (long long i = L; i <= R; i++) {
        if (is_prime_segment[i - L] && i > 1) {
            count++;
        }
    }

    printf("%d\n", count);

    free(is_prime);
    free(is_prime_segment);
}

int main() {
    long long L, R;
    scanf("%lld %lld", &L, &R);

    segmentedSieve(L, R);

    return 0;
}