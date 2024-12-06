#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x_result = -1, k_result = -1;
    for (int x = 1; x <= 100; x++) {
        for (int k = 1; k <= 100; k++) {
            int total = 0;
            for (int week = 0; week < 52; week++) {
                for (int day = 0; day < 7; day++) {
                    total += x + day * k;
                }
            }
            if (total == n) {
                if (x > x_result || (x == x_result && k < k_result)) {
                    x_result = x;
                    k_result = k;
                }
            }
        }
    }
    if (x_result != -1 && k_result != -1) {
        printf("%d\n%d", x_result, k_result);
    }
}