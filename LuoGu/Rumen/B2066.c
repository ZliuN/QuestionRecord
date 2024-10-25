#include <stdio.h>
#include <math.h>
double distanse (double x, double y){
    return sqrt(pow(x, 2)+pow(y, 2));
}

int main(){
    int n;
    scanf("%d", &n);
    double x[n], y[n], population[n];
    double t = 0, route[n], people[n];
    for (int i=0;i<n;i++){
        scanf("%lf %lf %lf", &x[i], &y[i], &population[i]);
        route[i] = distanse(x[i], y[i]) / 25;
        people[i] = population[i] * 1.5;
        t = people[i] + route[i] + t;
    }
    printf("%d", (int)ceil(t));
}