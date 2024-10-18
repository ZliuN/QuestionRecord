#include<stdio.h>
int main(){
    double a, b;
    double c;
    scanf("%lf\n%lf", &a, &b);
    c = (b / a) * 100;
    printf("%.3lf%%", c);
    return 0;
}