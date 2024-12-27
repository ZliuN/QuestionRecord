#include <stdio.h>
int main(){
    int n,x,y;
    int count=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        int j=i;
        while (j>0)
        {
            y=j%10;
            if(y==x){
                count++;
            }
            j/=10;
        }
    }
    printf("%d",count);
}