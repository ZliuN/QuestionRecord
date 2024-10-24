#include <stdio.h>

// int main(){
//      int n, i, sequnce, sum;
//      scanf("%d", &n);
//      int a[30], fs[n];
//      fs[0]=1,fs[1]=1;
//      for (i=2;i<31;i++){
//         sum = fs[i-1]+fs[i-2];
//         fs[i]=sum;
//      }
//      for (i=0;i<n;i++){
//         scanf("%d", &a[i]);
//      }
//      for (i=0;i<n;i++){
//         printf("%d\n", fs[a[i]-1]);
//      }
// }

int fs(int a);

int main(){
    int n, arr[30];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n", fs(arr[i]));
    }
}
int fs(int a){
    if (a == 1|| a==2){
        return 1;
    }else{
        int f1 = 1, f2 =1, fn;
        for (int i = 3;i <=a; i++){
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return fn;
    }
}