#include <stdio.h>

int main(){
    double h,sum = 0;
    scanf("%lf", &h);
    sum+=h;
    int i;
    for(i = 1;i<=10;i++){
        h/=2;
        sum+=(h*2);
    }
    sum-=(h*2);
    printf("%g\n%g", sum, h);
}