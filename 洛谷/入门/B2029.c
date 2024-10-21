#include <stdio.h>
#include <math.h>
#define PI 3.14
#define ALL 20000

int main (){
    int r, h;
    double volume, result;
    scanf("%d %d", &h, &r);
    volume = PI * pow(r, 2) * h;
    result = ALL / volume;
    printf("%d", (int)result+1);
}
