#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d", &n);
    int x=1;
    for(int i =1;i<=n;i++) {
        for(int j =1;j<=i;j++) {
            x*=j;
        }
    sum+=x;
    x = 1;
    }
    printf("%d", sum);
}