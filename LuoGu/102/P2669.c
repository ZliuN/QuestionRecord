#include <stdio.h>
int main() {
    int k;
    scanf("%d", &k);

    int total_coins = 0;
    int current_day = 1;
    int coins_per_day = 1;
    int days_in_period = 1;

    while (current_day <= k) {
        for (int i = 0; i < days_in_period && current_day <= k; i++) {
            total_coins += coins_per_day;
            current_day++;
        }
        coins_per_day++;
        days_in_period++;
    }
    printf("%d", total_coins);
    return 0;
}