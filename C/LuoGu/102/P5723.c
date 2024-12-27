#include <stdio.h>
int number_Prime(int x);
int IsPrime(int n);
int main(){
    int L;
    scanf("%d",&L);
    printf("%d",number_Prime(L));
}

int number_Prime(int x){
    int count=0;
    int sum=0;
    for(int i=2;i<x;i++){
        if(IsPrime(i)==1){
            sum+=i;
        }
        if(sum<=x&&IsPrime(i)==1){
            printf("%d\n",i);
            count++;
        }
    }
    return count;
}
int IsPrime(int n){
    int i;
    if(n<2)
        return 0;
    else{
        for(i=2;i<n;i++){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}