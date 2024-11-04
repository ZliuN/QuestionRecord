 /*                              
                   ┌─┐       ┌─┐
                ┌──┘ ┴───────┘ ┴──┐
                │                 │
                │       ───       │
                │  ─┬┘       └┬─  │牛子陆错母娘。真舒服。
                │                 │
                │       ─┴─       │
                │                 │
                └───┐         ┌───┘
                    │         │
                    │         │
                    │         │
                    │         └──────────────┐
                    │                        │
                    │                        ├─┐
                    │                        ┌─┘
                    │                        │
                    └─┐  ┐  ┌───────┬──┐  ┌──┘
                      │ ─┤ ─┤       │ ─┤ ─┤
                      └──┴──┘       └──┴──┘
*/
#include <stdio.h>

int main(){
    int n, m, count =0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for(int i = 0;i<n;i++){
        if(m == arr[i]){
            count++;
        }
    }
    printf("%d", count);
}