#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int packages[3][2];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &packages[i][0], &packages[i][1]);
    }
    int min_cost = 100000000;
    for (int i = 0; i < 3; i++) {
        int pencils_per_pack = packages[i][0];
        int price_per_pack = packages[i][1];
        int packs_needed = (n + pencils_per_pack - 1) / pencils_per_pack; // 向上取整
        int total_cost = packs_needed * price_per_pack;
        if (total_cost < min_cost) {
            min_cost = total_cost;
        }
    }
    printf("%d", min_cost);
    return 0;
}