#include <stdio.h>

int main(){
    int n, i;
    scanf("%d\n", &n);
    double arr[n],average,sum=0;
    for (i=0;i<n;i++){
        scanf("%lf", &arr[i]);
        sum = sum+arr[i];
    }
    average = sum / n;
    printf("%.4lf", average);
}