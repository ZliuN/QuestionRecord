#include <stdio.h>
#include <math.h>
int main(){
    double x, ans = 0;
    int n;
    scanf("%lf %d", &x, &n);
    for (int i=0;i<=n;i++){
        ans += pow(x, i);
    }
    printf("%.2lf", ans);
}