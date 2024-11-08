#include <stdio.h>
int main(){
    float n;
    scanf("%f", &n);
    int arr[4];
    n*=10;
    for(int i=0;i<4;i++){
        arr[i]=(int)n%10;
        n/=10;
    }
    printf("%d.%d%d%d",arr[0],arr[1],arr[2],arr[3]);
}