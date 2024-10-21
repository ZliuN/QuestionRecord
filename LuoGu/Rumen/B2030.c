#include <stdio.h>

int main(){
    int xa, ya, xb, yb;
    double d;
    scanf("%d %d\n%d %d", &xa, &ya, &xb, &yb);
    d = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    printf("%.3lf", d);
}