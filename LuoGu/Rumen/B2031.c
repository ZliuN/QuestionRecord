#include <stdio.h>
#include <math.h>
// int main (){
//     double x1, y1, x2, y2, x3, y3, square;
//     scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//     square = (x1*fabs(y2-y3)+x2*fabs(y3-y1)+x3*fabs(y1-y2)) / 2;
//     printf("%.2lf", square);
// }

// int main (){
//     double x1, y1, x2, y2, x3, y3, square, p, a, b, c;
//     scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//     a = dist(x1, y1, x2, y2);
//     b = dist(x2, y2, x3, y3);
//     c = dist(x3, y3, x1, y1);
//     p = (a+b+c)/2;
//     square = sqrt(p*(p-a)*(p-b)*(p-c));
//     printf("%.2lf", square);
// }


double xa,ya,xb,yb,xc,yc;
double sq(double x){return x*x;}
double dist(double xa,double ya,double xb,double yb){
	return sqrt(sq(abs(xa-xb))+sq(abs(ya-yb)));
}
int main(){
    scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
    double a=dist(xa,ya,xb,yb),b=dist(xa,ya,xc,yc),c=dist(xb,yb,xc,yc);
    double p=(a+b+c)/2;
    printf("%.2lf",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}