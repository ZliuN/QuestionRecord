#include <stdio.h>
int main(){
    long long N;
    scanf("%lld",&N);
    long long result=0;
    while (N!=0){
        result = result*10+N%10;
        N/=10;
    }
    if(N>=0) printf("%lld",result);
    if(N<0) printf("-%lld",result);
}