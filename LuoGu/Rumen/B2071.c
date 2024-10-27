#include <stdio.h>

int main(){
    int a, b, c;
    double d,e,f;
    scanf("%d %d %d", &a, &b, &c);
    for (int x=2;x<100000; x++){
        d = a % x;
        e = b % x;
        f = c % x;
        if(d == e&& e == f){
            printf("%d", x);
            break;
        }
    }
}