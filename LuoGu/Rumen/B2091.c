#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[2][n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[0][i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &arr[1][i]);
    }
    for(int i=0;i<n;i++){
        sum +=arr[0][i]*arr[1][i];
    }
    printf("%d", sum);
}