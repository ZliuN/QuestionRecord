#include  <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n],max = 1;
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    printf("%d", max);
}