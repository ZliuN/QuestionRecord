#include<stdio.h>
int main(){
    long long a;
    scanf("%lld",&a);
    if(a%2==0){
        if(a%3==0){
            if(a%5==0)
                printf("2 3 5");
            else
                printf("2 3");
        }else if(a%5==0){
            if(a%3==0)
                printf("2 3 5");
            else
                printf("2 5");
        }else
            printf("2");
    }else if(a%3==0){
        if(a%5==0)
            printf("3 5");
        else
            printf("3");
    }else if(a%5==0)
        printf("5");
    return 0;
}