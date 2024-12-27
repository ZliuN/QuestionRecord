#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double a,b,c,f;
    a=(1+sqrt(5))/2;
    b=(1-sqrt(5))/2;
    c=pow(a,n)-pow(b,n);
    f=c/sqrt(5);
    printf("%.2lf",f);
}