#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2,discriminant;
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = pow(b, 2.0) - 4.0 *a*c;
    if (discriminant > 0){
        x1= (-b+sqrt(discriminant))/(a*2);
        x2= (-b-sqrt(discriminant))/(a*2);
        if( x1 < x2 ){
            printf("x1=%.5lf;x2=%.5lf", x1, x2);
        }else{
            printf("x1=%.5lf;x2=%.5lf", x2, x1);
        }
    }
    if (discriminant < 0){
        printf("No answer!");
    }
    if (discriminant == 0){
        x1= (-b+sqrt(discriminant))/(a*2);
        x2= (-b-sqrt(discriminant))/(a*2);
        printf("x1=x2=%.5lf", x1);
    }
}