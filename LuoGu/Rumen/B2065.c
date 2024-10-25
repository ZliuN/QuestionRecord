#include <stdio.h>
int main(){
    int n, total_cases, effective_cases;
    scanf("%d", &n);
    scanf("%d %d", &total_cases, &effective_cases);
    double x_rate, y_rate[n-1];
    x_rate = (double)effective_cases / (double)total_cases;
    int to_cases[n-1], ef_cases[n-1]; 
    for (int i=0;i<n-1;i++){
        scanf("%d %d", &to_cases[i], &ef_cases[i]);
        y_rate[i] = (double)ef_cases[i] / to_cases[i];
    }
    for (int i=0;i<n-1;i++){
        if (y_rate[i] - x_rate > 0.05){
            printf("better\n");
        }else if(y_rate[i] - x_rate < -0.05){
            printf("worse\n");
        }else{
            printf("same\n");
        }
    }
}