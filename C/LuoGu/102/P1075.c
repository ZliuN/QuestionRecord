#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    for(int i=n-1;i>=2;i--){
        if(n%i==0){
            printf("%d",i);
            break;
        }
    }
}
