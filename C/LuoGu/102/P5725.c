#include <stdio.h>
int main(){
    int n,b,a=0,c=1;
    scanf("%d",&n);
    b=n;
    for(int i=1;i<=n;i++){
        for(int j=c;j<=b;j++){
            a++;
            printf("%02d",j);
            if(j==n*n){
                break;
            }
        }
    c=b+1;
    b+=n;
    printf("\n");
    }
    printf("\n");
    a = 0;
    for (int i = 1; i <= n; i++) {
        // 打印前导空格
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        // 打印数字
        for (int j = 1; j <= i; j++) {
            a++;
            printf("%02d", a);
        }
        printf("\n");
    }

    return 0;
}