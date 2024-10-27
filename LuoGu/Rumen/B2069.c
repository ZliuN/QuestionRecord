#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double q[n], p[n], result[n], sum = 2.0;
    q[0]=2,p[0]=1;
    if ( n == 0){
        printf("0.0000");
    }else{
        for(int i = 1;i<n;i++){
            q[i] = q[i-1]+p[i-1];
            p[i] = q[i-1];
            result[i] = q[i] / p[i];
            sum = result[i] + sum ;
        }
    }
    printf("%.4lf", sum);
}