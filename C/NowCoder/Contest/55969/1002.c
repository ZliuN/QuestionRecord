#include <stdio.h>

int main() {
    double a, b, c, sum, average;
    scanf("%lf %lf %lf", &a, &b, &c);
    sum = a+b+c;
    average = sum / 3;
    printf("%.2lf %.2lf", sum ,average);
}