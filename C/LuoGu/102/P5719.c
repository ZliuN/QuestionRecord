#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    double sum_1=0,sum_2=0;
    int count_1=0,count_2=0;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            sum_1+=i;
            count_1++;
        }else{
            sum_2+=i;
            count_2++;
        }
    }
    printf("%.1lf %.1lf",sum_1/count_1,sum_2/count_2);
}