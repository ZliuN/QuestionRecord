#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x;
    int b=10001;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            b = i;
            printf("%d", b);
            break;
        }
    }
    if(b == 10001){
        printf("-1");
    }
}