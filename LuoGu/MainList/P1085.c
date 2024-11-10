#include <stdio.h>
int main(){
    int arr[2][7],m[7];
    for(int i=0;i<7;i++){
        scanf("%d %d",&arr[0][i],&arr[1][i]);
        m[i]=arr[0][i]+arr[1][i];
    }
    int max=m[0],o;
    for(int i=0;i<7;i++){
        if(max<m[i]){
            max=m[i];
            o=i+1;
        }
    }
    printf("%d",o);
}