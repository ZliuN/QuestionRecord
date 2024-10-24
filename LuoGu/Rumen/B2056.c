#include <stdio.h>

int main(){
    long long n, sum, i;
    sum = 0;
    scanf("%lld\n", &n);
    long long arr[n];
    double average;
    for (i=0;i<n;i++){
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }
    average = (double)sum / (double)n;
    printf("%lld %.5lf", sum, average);
}
