#include <stdio.h>
#define T 1910
int main(){
    int s,v,time;
    scanf("%d %d",&s,&v);
    int h,m;
    time=(s+v-1)/v;
    h=(T-time)/60;
    m=(T-time)%60;
    h%=24;
    printf("%02d:%02d",h,m);
}