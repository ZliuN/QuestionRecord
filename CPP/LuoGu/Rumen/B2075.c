#include <stdio.h>

int main(){
    int a, b, ans=1;
    scanf("%d %d",&a, &b);
    for(int i=1;i<=b;i++){
        ans *= a;
        ans %= 1000;
    }
    printf("%03d", ans);
}