#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0&&n%100!=0){
        printf("1");
        return 0;
    }
    if(n%400==0){
        printf("1");
        return 0;
    }
    printf("0");
}