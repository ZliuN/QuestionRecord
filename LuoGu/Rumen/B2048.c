#include <stdio.h>

int main() {
    int weight;
    char isExpress;
    int baseFee = 8;
    int extraFee = 4;
    int expressFee = 5;
    int totalFee;
    scanf("%d %c", &weight, &isExpress);
    if (weight <= 1000) {
        totalFee = baseFee;
    } else {
        int extraWeight = weight - 1000;
        int extraCharges = (extraWeight + 499) / 500 * extraFee;
        totalFee = baseFee + extraCharges;
    }
    if (isExpress == 'y') {
        totalFee += expressFee;
    }
    printf("%d\n", totalFee);

    return 0;
}