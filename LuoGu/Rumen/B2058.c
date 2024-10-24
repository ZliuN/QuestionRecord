#include <stdio.h>

int main(){
    int n, i, gold, silver, bronze;
    int total_gold = 0, total_silver = 0, total_bronze =0, total_medal;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d %d %d", &gold, &silver, &bronze);
        total_gold += gold;
        total_silver += silver;
        total_bronze += bronze;
    }
    total_medal= total_gold+total_silver+total_bronze;
    printf("%d %d %d %d", total_gold, total_silver, total_bronze, total_medal);
}