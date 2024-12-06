#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("%d ",num/100);
    printf("%d ",(num/10)%10);
    printf("%d ",num%10);
}