#include <stdio.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    int b=n;
    for(int i=0;i<n;i++){
        for(int k=0;k<b;k++){
            a++;
            printf("%02d",a);
        }
    b--;
    printf("\n");
    }
}