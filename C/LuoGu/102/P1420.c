#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],max=1,a;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        a=0;
        if(arr[i+1]-arr[i]==1){
            for(int j=i;j<n;j++){
                a++;
                if(arr[j+1]-arr[j]!=1){
                    break;
                }
            }
        }
        if(max<a){
            max=a;
        }
    }
    printf("%d",max);
}
