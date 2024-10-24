#include <stdio.h>
#include <math.h>
#define rate 1.001
int main(){
    int x, n;
    double population;
    scanf("%d %d", &x, &n);
    population = (double)x*pow(rate, n);
    printf("%.4lf", population);
}