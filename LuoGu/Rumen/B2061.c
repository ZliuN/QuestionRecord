#include <stdio.h>

int main(){
    int k, i, count_1=0, count_5=0, count_10=0;
    scanf("%d", &k);
    int arr[k];
    for(i=0;i<k;i++){
        scanf("%d", &arr[i]);
        if(1==arr[i]){
            count_1++;
        }
        if(5==arr[i]){
            count_5++;
        }
        if(10==arr[i]){
            count_10++;
        }
    }
    printf("%d\n%d\n%d", count_1, count_5, count_10);
}