#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (0==n%3+n%5){
        printf("YES");
    }else{
        printf("NO");
    }
}