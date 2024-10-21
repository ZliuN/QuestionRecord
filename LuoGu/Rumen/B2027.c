#include <stdio.h>
#include <math.h>
// int main(){
//     const double π = 3.14;
//     double v, r;
//     scanf("%lf", &r);
//     v = (4.0/3.0)*π*r*r*r;
//     printf("%.5lf", v);
//     return 0;
// }

#define PI 3.14
int main(){
	double r;
    scanf("%lf",&r);
	printf("%.5lf",4.0/3.0*PI*pow(r,3));
	return 0;
}