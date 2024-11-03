#include <stdio.h>

int main() {
    int n, m, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        if (arr[i] == m) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}