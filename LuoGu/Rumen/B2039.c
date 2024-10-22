#include <stdio.h>

int main(){
    long long x, y;
    scanf("%lld %lld", &x, &y);
    if (x<y){
        printf("<");
    }if(x>y){
        printf(">");
    }if(x==y){
        printf("=");
    }
}