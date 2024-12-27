#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int a, b, c;
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if ((a * b * c) % 3 == 0) {
            printf("LaoSu Like Fake\n");
        } else {
            printf("LaoSu Don't Like Fake\n");
        }
    }
    return 0;
}