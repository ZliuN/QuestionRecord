#include<stdio.h>
int main(){
    double r, d, l, s;
    const double p = 3.14159;
    scanf("%lf", &r);
    d = r * 2;
    l = p * d;
    s = p * r * r;
    printf("%.4lf %.4lf %.4lf", d, l, s);
    return 0;
}