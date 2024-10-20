#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    double k=a/b;
    int k_int = (int)k;
    double r = a - k_int*b;
    printf("%lf", r);
}