#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    if (n < 0){
        printf("negative");
    }if (n > 0){
        printf("positive");
    }if (n == 0){
        printf("zero");
    }
}