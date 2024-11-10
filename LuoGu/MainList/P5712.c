#include <stdio.h>
int main(){
    int x=0;
    scanf("%d",&x);
    if(x==1||x==0){
        printf("Today, I ate %d apple.",x);
    }else{
        printf("Today, I ate %d apples.",x);
    }
}