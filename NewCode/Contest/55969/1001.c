#include <stdio.h>

int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",max(max(max(a,b),c),d));
}