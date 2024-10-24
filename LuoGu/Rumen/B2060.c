#include <stdio.h>

int main(){
    int m, n, sum=0, i;
    scanf("%d %d", &m, &n);
    for (i=m;i<=n;i++){
        if(0==i%17){
            sum += i;
        }
    }
    printf("%d", sum);
}