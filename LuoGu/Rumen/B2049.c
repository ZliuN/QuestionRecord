#include <stdio.h>
int main(){
    int max, i;
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    max = arr[0];
    for ( i = 0; i < 3; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
}