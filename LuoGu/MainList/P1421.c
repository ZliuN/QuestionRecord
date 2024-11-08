#include <stdio.h>
#define P 19
int main(){
    int y,j,a;
    scanf("%d %d", &y, &j);
    a = y*10+j;
    printf("%d", a/P);
}