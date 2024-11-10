#include <stdio.h>
int main(){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0){
        printf("0");
        return 0;
    }
    double result;
    result = (double)m-((double)s/t);
    if(result<=0){
        printf("0");
    }else{
        printf("%d",(int)result);
    }
}