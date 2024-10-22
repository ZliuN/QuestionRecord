#include <stdio.h>

int main(){
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &c);
    if( a < 60 ){
        n++;
    }
    if( b < 60 ){
        n++;
    }
    if( c < 60 ){
        n++;
    }
    if( n == 1 ){
        printf("1");
    }else{
        printf("0");
    }
}