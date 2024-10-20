#include <stdio.h>

int main(){
    int a, b, c, d;
    a = b = c = 0;
    scanf("%d", &d);
    a = d % 10;
    b = d / 10;
    b = b % 10;
    c = d / 100;
    printf("%d%d%d", a, b, c);
}