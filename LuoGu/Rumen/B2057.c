#include <stdio.h>

int main(){
    long long n, i, max;
    scanf("%lld\n", &n);
    long long arr[n];
    max = 0;
    for (i=0;i<n;i++){
        scanf("%lld", &arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%lld", max);
}