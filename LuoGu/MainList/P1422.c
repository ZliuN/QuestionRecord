#include <stdio.h>
int main(){
    double n,price;
    scanf("%lf",&n);
    if(n<150){
        price=n*0.4463;
    }
    if(n>150&&n<400){
        price=66.945+(n-150)*0.4663;
    }if(n>400){
        price=183.52+(n-400)*0.5663;
    }
    printf("%.1lf",price);
}