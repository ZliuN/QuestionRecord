#include <stdio.h>

int count_solutions(int a, int b, int c) {
    int count = 0;
    for (int x = 0; x <= c / a; x++) {
        if ((c - a * x) % b == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", count_solutions(a, b, c));
    return 0;
}