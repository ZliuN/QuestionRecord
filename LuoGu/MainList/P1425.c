#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int e=0,f=0;
    int m1,m2;
    m1 = a*60+b;
    m2 = c*60+d;
    e = (m2-m1)/60;
    f = (m2-m1)%60;
    printf("%d %d", e, f);
}