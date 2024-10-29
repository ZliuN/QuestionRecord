#include <stdio.h>

int main(){
    int l,r,count=0;
    scanf("%d %d", &l, &r);
    for(int i=l;i<=r;i++){
        int a=i;
        for(int j=1;j<=4;j++){
            int b = a%10;
            if(b==2){
                count++;
            }
            a/=10;
        }
    }
    printf("%d", count);
}