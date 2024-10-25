#include <stdio.h>

int main(){
    int m, n;
    scanf ("%d\n%d", &m, &n);
    int arr[n], sum = 0, count = n, leftover_medicines = m;
    if(n>0&&n<=100){
        for (int i = 0;i < n; i++){
            scanf("%d", &arr[i]);
            if( leftover_medicines >= arr[i]){
                leftover_medicines = leftover_medicines - arr[i];
                count = count - 1;
            }
        }
    }
    printf("%d", count);

}