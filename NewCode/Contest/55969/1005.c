#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) {
        int d=0;
        scanf("%d", &d);
        arr[i] = d;
    }
    int x,count=0;
    scanf("%d", &x);
    for(int j=0;j<n;j++) {
        if(arr[j]==x) {
            count++;
        }
    }
    printf("%d", count);
}