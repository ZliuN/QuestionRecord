#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],max=0,min=1000;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int x;
    x=max-min;
    printf("%d",x);
}