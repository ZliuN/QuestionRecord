#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;
    scanf("%c\n%d\n%f\n%lf", &c, &a, &b, &d);
    printf("%c %d %.6f %.6lf", c, a, b, d);
}