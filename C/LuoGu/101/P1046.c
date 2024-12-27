#include <stdio.h>
int main(){
    int arr[10],count=0,h;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&h);
    for(int i=0;i<10;i++){
        if(arr[i]<=h+30){
            count++;
        }
    }
    printf("%d",count);
}