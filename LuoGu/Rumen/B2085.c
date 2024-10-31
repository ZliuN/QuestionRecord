#include <stdio.h>

int isPrime(int num){
    if( num < 2){
        return 0;
    }
    for(int i = 2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        } 
    }
    return 1;
}
int main(){
    int n,count=0,i;
    scanf("%d", &n);
    int prime[n];
    for(i=2;i<=9e9;i++){
        if(isPrime(i)){
            prime[count]=i;
            count++;
            if(count>=n){
                break;
            }
        }
    }
    printf("%d", prime[n-1]);
}