#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int a1, b1, c1, d1, e1;
    int a2, b2, c2, d2, e2;
    a1=a/3,b = a1 +b,e = a1 +e;
    a2=a%3;
    b1=b/3,c = b1 +c,a1 = b1 + a1;
    b2=b%3;
    c1=c/3,d = c1 +d,b1 = c1 +b1;
    c2=c%3;
    d1=d/3,e = d1 +e,c1 = d1 +c1;
    d2=d%3;
    e1=e/3,a1 = e1 +a1,d1 = e1 +d1;
    e2=e%3;
    printf("%d %d %d %d %d\n%d", a1, b1, c1, d1, e1, a2+b2+c2+d2+e2);
}