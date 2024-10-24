#include <stdio.h>

int main(){
    int n,arr[100];
    scanf("%d\n",&n);
    int i;
    double average_age, sum = 0.0;
    for (i=0;i<=n-1;i++){
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    double double_sum = (double)sum;
    average_age = double_sum / n;
    printf("%.2lf", average_age);
}