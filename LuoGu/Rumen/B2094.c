#include <stdio.h>

int main(){
    int N, count = 0;
    scanf("%d", &N);
    long long arr[N];
    for(int i=0;i<N;i++){
        scanf("%lld", &arr[i]);
    }
    long long max = arr[0];
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(max == arr[i]){
            count++;
        }
    }
    long long sum = 0;
    for(int i=0;i<N;i++){
        sum +=arr[i];
    }
    long long sum_s = sum-(max*count);
    printf("%lld", sum_s);
}