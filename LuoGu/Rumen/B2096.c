#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int fmax = 0;
    scanf("%d", &n);
    int *num = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if (num[i] > fmax) {
            fmax = num[i];
        }
    }
    int *s = (int *)calloc(fmax + 1, sizeof(int));
    for (int i = 0; i < n; i++) {
        s[num[i]]++;
    }
    for (int i = 0; i <= fmax; i++) {
        printf("%d\n", s[i]);
    }
    free(num);
    free(s);
    return 0;
}