#include <stdio.h>

int main(){
    double a;
    scanf("%lf", &a);
    printf("%lf\n%.5lf\n%e\n%g", a, a, a, a);
}