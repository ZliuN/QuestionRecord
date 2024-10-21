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

double x1, y11, x2, y2, x3, y3, a, b, c, p;
inline double dis(double x1, double y11, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y11 - y2) * (y11 - y2));
} //给定坐标计算两点之间距离
int main(void) {
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y11, &x2, &y2, &x3, &y3);
    a = dis(x1, y11, x2, y2);
    b = dis(x2, y2, x3, y3);
    c = dis(x3, y3, x1, y11);
/*
a, b, c为三边边长
*/
    p = (a + b + c) / 2; //p为周长一半
    printf("%.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c))); //直接用简单的海伦公式即可
    return 0;
}