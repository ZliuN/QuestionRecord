#include <stdio.h>
#include <stdbool.h>
/*
int main(){
    int n;
    scanf("%d", &n);
    bool arr[n+1];
    for(int i = 0;i<n+1;i++){
        arr[i] = true;
    }
    for(int i = 2;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(j % i==0){
                arr[j] = !arr[j];
            }
        }
    }
    for(int i = 1;i<=n;i++){
        if(arr[i]==true){
            printf("%d ", i);
        }
    }
}
*/

// 这题其实是一道小奥的数论题，是考完全平方数的，这题主要用到了完全平方数因数个数是奇数的特性
// 这题的按按钮的方式就是将所有 1 的倍数,2 的倍数,3 的倍数,一直到n的倍数的灯都按一遍。
// 我们知道，要想改变一个灯的状态，必须按奇数次开关，被按的次数相当于他编号的因数个数，刚好，完全平方数刚好就符合这一特性，所以我们只需输出所有不大于 n 的完全平方数就好啦。
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i*i<=n;i++){
        printf("%d ", i*i);
    }
}