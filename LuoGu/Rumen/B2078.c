#include <stdio.h>

int main(){
    long long m,k;
    int count = 0,last;
    scanf("%lld %lld", &m,&k);
    for(int i=1;i<=15;i++){
        last = m % 10;
        m /= 10;
        if( last==3){
            count++;
        }
    }
    if(k == count){
        printf("YES");
    }else{
        printf("NO");
    }
}