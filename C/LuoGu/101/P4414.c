#include <stdio.h>
int main(){
    int a,b,c,sum,max,min;
    char symbol;
    scanf("%d %d %d\n",&a,&b,&c);
    sum=a+b+c;
    if(a>b){
        max=a;
    }else{
        max=b;
    }if(max<c){
        max=c;
    }
    if(a<b){
        min=a;
    }else{
        min=b;
    }if(min>c){
        min=c;
    }
    a=min;
    c=max;
    b=sum-min-max;
    for(int i=0;i<3;i++){
        scanf("%c",&symbol);
        if(symbol=='A'){
            printf("%d ",a);
        }if(symbol=='B'){
            printf("%d ",b);
        }if(symbol=='C'){
            printf("%d ",c);
        }
    }
}