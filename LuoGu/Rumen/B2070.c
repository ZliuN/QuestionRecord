#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    double sn=0, an[n], a;
    for (int i = 0;i < n; i++){
        a = 1.0 / (i+1.0);
        an[i] = pow(-1.0, i)*a;
        sn += an[i];
    }
    printf("%.4lf", sn);
}