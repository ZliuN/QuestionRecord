#include <stdio.h>

int main(){
    int m, n, sum = 0, i;
    scanf("%d %d", &m, &n);
    for(i=m;i<n+1;i++){
        if(1==i%2){
            sum += i;
        }
    }
    printf("%d", sum);
}