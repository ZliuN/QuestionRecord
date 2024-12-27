#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=1;
    while (a>1)
    {
        a/=2;
        count++;
    }
    printf("%d",count);
}