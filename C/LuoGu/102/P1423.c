 #include <stdio.h>
 int main(){
    double s;
    int count=0;
    scanf("%lf",&s);
    double d=0,x;
    x=2;
    while(d<s){
        d+=x;
        x*=0.98;
        count++;
    }
    printf("%d",count);
 }